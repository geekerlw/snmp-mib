/*
 * snmp-test.c - a simple test program for snmp-mib-headers.
 *
 */

#include <net-snmp/net-snmp-config.h>

#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_STRING_H
#include <string.h>
#else
#include <strings.h>
#endif
#include <sys/types.h>
#if HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif
#include <stdio.h>
#include <ctype.h>
#if TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif
#if HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif
#if HAVE_NETDB_H
#include <netdb.h>
#endif
#if HAVE_ARPA_INET_H
#include <arpa/inet.h>
#endif

#include <net-snmp/utilities.h>

#include <net-snmp/net-snmp-includes.h>

#include "mib_api.h"

#define NETSNMP_DS_APP_DONT_FIX_PDUS 0

int
main()
{
    netsnmp_session session, *ss;
    netsnmp_pdu    *pdu;
    netsnmp_pdu    *response;
    netsnmp_variable_list *vars;
    int             arg;
    int             count;
    int             current_name = 0;
    char           *names[SNMP_MAX_CMDLINE_OIDS];
    oid             name[MAX_OID_LEN];
    size_t          name_length;
    int             status;
    int             failures = 0;
    int             exitval = 0;
	
	mibObject *ricohmib;
	ricohmib = (mibObject *)malloc(sizeof(mibObject));
	ricohmib = ricohMibObjectget();
	
	/* initial the snmp library */
	init_snmp("snmpapp");

	/* intial a session defined who we talk to */
	snmp_sess_init(&session);

	/* set session */
	session.peername = strdup("192.168.18.153");

	session.version = SNMP_VERSION_1;
	session.community = "public";
	session.community_len = strlen(session.community);

	SOCK_STARTUP;


    /*
     * Open an SNMP session.
     */
    ss = snmp_open(&session);
    if (ss == NULL) {
        /*
         * diagnose snmp_open errors with the input netsnmp_session pointer 
         */
        snmp_sess_perror("snmpget", &session);
        SOCK_CLEANUP;
        exit(1);
    }
	
	/*
     * Create PDU for GET request and add object names to request.
     */
    pdu = snmp_pdu_create(SNMP_MSG_GET);
    /*
     * get the object names 
     */
    /* test for ricohSysDescr.ricohSysName.oid */
	char *oid = ricohmib->oidp[PRINTER_PRODUCT_NAME].oid;

	if (!snmp_parse_oid(oid, name, &name_length)) {
		snmp_perror(oid);
		failures++;
	}
	
	snmp_add_null_var(pdu, name, name_length);

	if (failures) {
		snmp_close(ss);
		SOCK_CLEANUP;
		exit(1);
	}

    /*
     * Perform the request.
     *
     * If the Get Request fails, note the OID that caused the error,
     * "fix" the PDU (removing the error-prone OID) and retry.
     */
  retry:
    status = snmp_synch_response(ss, pdu, &response);
    if (status == STAT_SUCCESS) {
        if (response->errstat == SNMP_ERR_NOERROR) {
            for (vars = response->variables; vars;
                 vars = vars->next_variable)
                print_variable(vars->name, vars->name_length, vars);

        } else {
            fprintf(stderr, "Error in packet\nReason: %s\n",
                    snmp_errstring(response->errstat));

            if (response->errindex != 0) {
                fprintf(stderr, "Failed object: ");
                for (count = 1, vars = response->variables;
                     vars && count != response->errindex;
                     vars = vars->next_variable, count++)
                    /*EMPTY*/;
                if (vars) {
                    fprint_objid(stderr, vars->name, vars->name_length);
		}
                fprintf(stderr, "\n");
            }
            exitval = 2;

            /*
             * retry if the errored variable was successfully removed 
             */
            if (!netsnmp_ds_get_boolean(NETSNMP_DS_APPLICATION_ID,
					NETSNMP_DS_APP_DONT_FIX_PDUS)) {
                pdu = snmp_fix_pdu(response, SNMP_MSG_GET);
                snmp_free_pdu(response);
                response = NULL;
                if (pdu != NULL) {
                    goto retry;
		}
            }
        }                       /* endif -- SNMP_ERR_NOERROR */

    } else if (status == STAT_TIMEOUT) {
        fprintf(stderr, "Timeout: No Response from %s.\n",
                session.peername);
        exitval = 1;

    } else {                    /* status == STAT_ERROR */
        snmp_sess_perror("snmpget", ss);
        exitval = 1;

    }                           /* endif -- STAT_SUCCESS */


    if (response)
        snmp_free_pdu(response);
    snmp_close(ss);
    SOCK_CLEANUP;

    return exitval;

}                               /* end main() */


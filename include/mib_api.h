/*
 * This file provide the index of all printer's snmp mib objects
 * return a pointer of the mib objects
 */
#ifndef _MIB_API_H
#define _MIB_API_H

#include "mib_types.h"

#include "../ricoh/ricoh.h"

/* 
 * oid objects search index
 */

/* printer description (0X00 - 0X10) */
#define PRINTER_PRODUCT_NAME 				0x00
#define PRINTER_VENDOR_NAME					0x01

/* printer advance sets (0x11 - 0x20) */
#define COPY_CONSOLE						0x11
#define SCAN_CONSOLE						0x12
#define PRINT_CONSOLE						0x13
#define PRINTER_USB							0X14
#define PRINTER_BLUETOOTH					0x15
#define PRINTER_JOB_CONTROL					0x16

/* printer devices status (0X21 - 0X40) */
#define SCAN_SHARE_STATUS					0x21
#define SCAN_CONTACT_STATUS					0X22
#define SCAN_ERROR_STATUS					0X23
#define SCAN_STATUS_SUMMARY					0x24
#define COPY_STATUS_SUMMARY					0X25
#define MFP_STATUS_SUMMARY					0X26
#define MFP_INPUT_NAME						0X27
#define MFP_INPUT_LEVEL						0X28
#define MFP_INPUT_STATUS					0X29
#define MFP_OUTPUT_NAME						0x2A
#define MFP_OUTPUT_LEVEL					0x2B
#define MFP_OUTPUT_STATUS					0x2C
#define MFP_ENERGY_STATUS					0x2D

/* printer feed status (0X41 - 0X80)*/
#define COUNTER_NAME						0x41
#define COUNTER_LEVEL						0x42
#define COUNTER_TOTAL						0x43
#define COUNTER_PRINTER						0x44
#define COUNTER_COPIER						0x45
#define TONER_NAME							0x46
#define TONER_LEVEL							0x47

/* printer job status (0x81 - 0x100) */
#define JOB_PRINT_NAME						0x81
#define JOB_PRINT_PAGE						0x82
#define JOB_PRINT_INDEX						0x83
#define JOB_PRINT_TIME						0x84
#define JOB_PRINT_STATUS					0x85

/*
 *  api list for multi printer vendors
 */

/* ricoh printer mib object get api */
mibObject* ricohMibObjectget();

#endif

#ifndef RICOH_H
#define RICOH_H
//#include "ricoh-types.h"

#define MAX_OID_NUMS 20

/* enum the access of a oid object */
const enum accessNum {
	readOnly,								// 0
	writeOnly,								// 1
	readAndWrite,							// 2
	noneAccessable							// 3
};

/* each oid has such properties */
typedef struct ricohOidObject {
	char *description;
	char *oid;
	int access;
	int status;
}ricohOidObject;
typedef struct ricohMibObject {
	ricohOidObject oidObject[MAX_OID_NUMS];
	int oidObjectNums;
}ricohMibObject;

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
ricohMibObject ricohSysDescrInit();

/* ricoh status objects */
ricohMibObject ricohEngStatusInit();

ricohMibObject ricohEngScanInit();

ricohMibObject ricohEngEnergyInit();

ricohMibObject ricohEngCounterInit();

ricohMibObject ricohEngMFPInputInit();

ricohMibObject ricohEngMFPOutputInit();

ricohMibObject ricohEngPrtGeneralInit();

ricohMibObject ricohEngCpyGeneralInit();

ricohMibObject ricohEngTonerInit();

ricohMibObject ricohQueJobPrtInit();

ricohMibObject ricohLocalIfDevUsbInit();

#endif

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

/* Serial number(string) of the plotter engine. */
ricohMibObject ricohEngDescrInit();

/* ricoh status objects */
ricohMibObject ricohEngStatusInit();

ricohMibObject ricohEngEmulatorRPCSInit();

ricohMibObject ricohEngEmulatorPCLInit();

ricohMibObject ricohEngOptionInit();

ricohMibObject ricohEngSearchInit();

ricohMibObject ricohEngAdfInit();

ricohMibObject ricohEngScanInit();

ricohMibObject ricohEngEnergyInit();

ricohMibObject ricohEngCounterInit();

ricohMibObject ricohEngMFPGeneralInit();

ricohMibObject ricohEngMFPInputInit();

ricohMibObject ricohEngMFPOutputInit();

ricohMibObject ricohEngMFPInserterInit();

ricohMibObject ricohEngPrtGeneralInit();

ricohMibObject ricohEngPrtInputInit();

ricohMibObject ricohEngPrtOutputInit();

ricohMibObject ricohEngPrtAlertInit();

ricohMibObject ricohEngPrtMarkingInit();

ricohMibObject ricohEngCpyGeneralInit();

ricohMibObject ricohEngCpyAlertInit();

ricohMibObject ricohEngTonerInit();

ricohMibObject ricohQueJobPrtInit();

ricohMibObject ricohLocalIfDevUsbInit();

ricohMibObject ricohLocalIfDevBluetoothInit();

#endif

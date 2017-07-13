#ifndef _RICOH_H
#define _RICOH_H

#define MAX_OID_NUMS 	50
#define NINDEX 	1
#define NOID	2

const enum oidObjectIndex {	
	ricohSysNameIndex,							// 0
	ricohSysOemIDIndex,							// 1
	ricohEngScanStatShareIndex,					// 2
	ricohEngScanStatContactGlassIndex,			// 3
	ricohEngScanStatErrorIndex,					// 4
	ricohEngScanStatSummaryIndex,				// 5
	ricohEngMFPStatSummaryIndex, 				// 6
	ricohEngCopyStatSummaryIndex, 				// 7
	ricohEngScanEndorserMessageIndex, 			// 8
	ricohEngEnergyStatTypeIndex,				// 9
	ricohEngEnergyStatCurrentIndex,				// 10
	ricohEngCounterTotalIndex,					// 11
	ricohEngCounterPrinterIndex, 				// 12
	ricohEngCounterCopierIndex, 				// 13
	ricohEngCounterNameIndex, 					// 14
	ricohEngCounterValueIndex, 					// 15
	ricohEngMFPInputCurrentLevelIndex,			// 16
	ricohEngMFPInputStatusIndex,				// 17
	ricohEngMFPInputNameIndex,					// 18
	ricohEngMFPOutputStatusIndex,				// 19
	ricohEngPrtConsoleDisableIndex, 			// 20
	ricohEngCpyConsoleDisableIndex, 			// 21
	ricohEngTonerNameIndex,						// 22
	ricohEngTonerLevelIndex, 					// 23
	ricohQueJobPrtNameIndex,					// 24
	ricohQueJobPrtPageIndex, 					// 25
	ricohQueJobPrtTimeIndex, 					// 26
	ricohQueJobPrtStatusIndex, 					// 27
	ricohQueJobPrtNewestIndexIndex,				// 28
	ricohQueJobPrtTableSizeIndex, 				// 29
	ricohQueJobPrtControlCapabilityIndex, 		// 30
	ricohQueJobPrtControlOperationIndex, 		// 31
	ricohLocalIfDevUsbAdminStatusIndex 			// 32
};

/* enum the access of a oid object */
const enum accessNum {
	readOnly,								// 0
	writeOnly,								// 1
	readAndWrite,							// 2
	noneAccessable							// 3
};

/* each oid has such properties */
typedef struct oidObject {
	char *description;
	char *oid;
	int access;
	int status;
}oidObject;
typedef struct mibObject {
	oidObject oidp[MAX_OID_NUMS];
	int oidNums;
}mibObject;

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
mibObject* ricohSysDescrInit();

mibObject* ricohEngStatusInit();

mibObject* ricohEngScanInit();

mibObject* ricohEngEnergyInit();

mibObject* ricohEngCounterInit();

mibObject* ricohEngMFPInputInit();

mibObject* ricohEngMFPOutputInit();

mibObject* ricohEngPrtGeneralInit();

mibObject* ricohEngCpyGeneralInit();

mibObject* ricohEngTonerInit();

mibObject* ricohQueJobPrtInit();

mibObject* ricohLocalIfDevUsbInit();

#endif

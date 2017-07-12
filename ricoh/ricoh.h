#ifndef RICOH_H
#define RICOH_H
//#include "ricoh-types.h"

#define MAX_OID_NUMS 20

/* enum the syntax of a oid object */
const enum syntaxNum {
	displayString,							// 0
	objectIdentifier,						// 1
	octecstring,							// 2
	ricohEngScanStatShareTC,				// 3
	ricohEngScanStatContactGlassTC,			// 4
	ricohEngScanStatErrorTC,				// 5
	ricohEngScanStatFunctionCurrentTC,		// 6
	integer32,								// 7
	ricohEngScanStatSummaryTC,				// 8
	ricohEngMFPStatSummaryTC,				// 9
	ricohEngFAXStatSummaryTC,				// 10
	ricohEngCopyStatSummaryTC,				// 11
	notAccessible,							// 12
};

/* enum the access of a oid object */
const enum accessNum {
	readOnly,								// 0
	writeOnly,								// 1
	readAndWrite,							// 2
	noneSupport								// 3
};

/* each oid has such properties */
typedef struct ricohOidObject {
	char *description;
	char *oid;
	int syntax;
	int access;
	int status;
}ricohOidObject;
typedef struct ricohMibObject {
	ricohOidObject oidObject[MAX_OID_NUMS];
	int oidObjectNums;
}ricohMibObject;

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
ricohMibObject ricohSysDescrInit();
/*
struct ricohSysDescr {
	oidObject ricohSysName;
	oidObject ricohSysVers;
	oidObject ricohSysContact;
	oidObject ricohSysLocation;
	oidObject ricohSysProductID;
	oidObject ricohSysOemID;
	oidObject ricohSysLanguage;
	oidObject ricohSysCountry;
	oidObject ricohSysMIBVersion;
	oidObject ricohSysDeviceID;
};

/* Serial number(string) of the plotter engine. */
/*
struct ricohEngDescr {
	oidObject ricohEngSerialNumber;
};

/* ricoh status objects */
/*
struct ricohEngStatus {
	oidObject ricohEngScanStatShare;
	oidObject ricohEngScanStatContactGlass;
	oidObject ricohEngScanStatError;
	oidObject ricohEngScanStatFunctionCurrent;
	oidObject ricohEngScanStatUserCurrent;
	oidObject ricohEngScanStatCompressBiLevel;
	oidObject ricohEngScanStatCompressMultiLevel;
	oidObject ricohEngScanStatSummary;
	oidObject ricohEngMFPStatSummary;
	oidObject ricohEngFAXStatSummary;
	oidObject ricohEngCopyStatSummary;
};
*/
#endif
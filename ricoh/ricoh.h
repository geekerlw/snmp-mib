#include "types.h"
#include "ricoh-info.h"

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
const struct ricohSysDescr = {
	mibObject ricohSysName;
	mibObject ricohSysVers;
	mibObject ricohSysContact;
	mibObject ricohSysLocation;
	mibObject ricohSysProductID;
	mibObject ricohSysOemID;
	mibObject ricohSysLanguage;
	mibObject ricohSysCountry;
	mibObject ricohSysMIBVersion;
	mibObject ricohSysDeviceID;
};

/* Serial number(string) of the plotter engine. */
const struct ricohEngDescr = {
	mibObject ricohEngSerialNumber;
};

/* ricoh status objects */
const struct ricohEngStatus = {
	mibObject ricohEngScanStatShare;
	mibObject ricohEngScanStatContactGlass;
	mibObject ricohEngScanStatError;
	mibObject ricohEngScanStatFunctionCurrent;
	mibObject ricohEngScanStatUserCurrent;
	mibObject ricohEngScanStatCompressBiLevel;
	mibObject ricohEngScanStatCompressMultiLevel;
	mibObject ricohEngScanStatSummary;
	mibObject ricohEngMFPStatSummary;
	mibObject ricohEngFAXStatSummary;
	mibObject ricohEngCopyStatSummary;
};
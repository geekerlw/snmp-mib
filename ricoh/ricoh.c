#include <stdio.h>
#include <string.h>
#include "ricoh.h"

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
ricohMibObject ricohSysDescrInit()
{
	const ricohOidObject ricohSysName = {
		.description = "System name in English.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.1.0",
		.access = 0,
	};

	const ricohOidObject ricohSysOemID = {
		.description = "Vendor name to identify OEM.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0",
		.access = 0,
	};

	ricohMibObject mibs = {
		.oidObject[0] = ricohSysName,
		.oidObject[1] = ricohSysOemID,
		.oidObjectNums = 2,
	};

	return mibs;
}

/* ricohEngStatus objects */
ricohMibObject ricohEngStatusInit()
{
	const ricohOidObject ricohEngScanStatShare = {
		.description = "Scanner status.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.11.0",
		.access = 0,
	};

	const ricohOidObject ricohEngScanStatContactGlass = {
		.description = "Status of paper on contact glass.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.12.0",
		.access = 0,
	};


	const ricohOidObject ricohEngScanStatError = {
		.description = "Error status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.13.0",
		.access = 0,
	};

	const ricohOidObject ricohEngScanStatSummary = {
		.description = "Summary error status of scanning application.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.18.0",
		.access =0,
	};

	const ricohOidObject ricohEngMFPStatSummary = {
		.description = "Summary error status of MFP(Platform).",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.20.0",
		.access = 0,
	};

	const ricohOidObject ricohEngCopyStatSummary = {
		.description = "Summary error status.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.22.0",
		.access = 0,
	};

	ricohMibObject mibs = {
		.oidObject[0] = ricohEngScanStatShare,
		.oidObject[1] = ricohEngScanStatContactGlass,
		.oidObject[2] = ricohEngScanStatError,
		.oidObject[3] = ricohEngScanStatSummary,
		.oidObject[4] = ricohEngMFPStatSummary,
		.oidObject[5] = ricohEngCopyStatSummary,
		.oidObjectNums = 6,
	};
		
	return mibs;	
}

ricohMibObject ricohEngScanInit()
{
	const ricohOidObject ricohEngScanEndorserMessage = {
	};
	
}

ricohMibObject ricohEngEnergyInit()
{
	const ricohOidObject ricohEngEnergyStatType = {
	};

	const ricohOidObject ricohEngEnergyStatCurrent = {
	};
	
}

ricohMibObject ricohEngCounterInit()
{
	const ricohOidObject ricohEngCounterTotal = {
	};
	const ricohOidObject ricohEngCounterPrinter  = {
	};
	const ricohOidObject ricohEngCounterCopier = {
	};
	const ricohOidObject ricohEngCounterName = {
	};
	const ricohOidObject ricohEngCounterValue = {
	};
}

ricohMibObject ricohEngMFPInputInit()
{
	const ricohOidObject ricohEngMFPInputCurrentLevel = {
	};
	const ricohOidObject ricohEngMFPInputStatus = {
	};
	const ricohOidObject ricohEngMFPInputName = {
	};
}

ricohMibObject ricohEngMFPOutputInit()
{
	const ricohOidObject ricohEngMFPOutputStatus = {
	};
}

ricohMibObject ricohEngPrtGeneralInit()
{
	const ricohOidObject ricohEngPrtConsoleDisable = {
	};
}

ricohMibObject ricohEngCpyGeneralInit()
{
	const ricohOidObject ricohEngCpyConsoleDisable = {
	};
}

ricohMibObject ricohEngTonerInit()
{
	const ricohOidObject ricohEngTonerName = {
	};
	const ricohOidObject ricohEngTonerLevel = {
	};
}

ricohMibObject ricohQueJobPrtInit()
{
	const ricohOidObject ricohQueJobPrtName = {
	};
	const ricohOidObject ricohQueJobPrtPage = {
	};
	const ricohOidObject ricohQueJobPrtTime = {
	};
	const ricohOidObject ricohQueJobPrtStatus = {
	};
	const ricohOidObject ricohQueJobPrtNewestIndex = {
	};
	const ricohOidObject ricohQueJobPrtTableSize = {
	};
	const ricohOidObject ricohQueJobPrtControlCapability = {
	};
	const ricohOidObject ricohQueJobPrtControlOperation = {
	};
}

ricohMibObject ricohLocalIfDevUsbInit()
{
	const ricohOidObject ricohLocalIfDevUsbAdminStatus = {
	};
}

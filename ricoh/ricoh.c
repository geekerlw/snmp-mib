#include <stdio.h>
#include <string.h>
#include "ricoh.h"

mibObject ricoh;

static void ricohSysDescrInit()
{
	oidObject ricohSysName = {
		.description = "System name in English.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.1.0",
		.access = 0,
	};
	
	oidObject ricohSysOemID = {
		.description = "Vendor name to identify OEM.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0",
		.access = 0,
	};

	ricoh.oidp[ricohSysNameIndex] = ricohSysName;
	ricoh.oidp[ricohSysOemIDIndex] = ricohSysOemID;
	ricoh.oidNums += 2;
}

static void ricohEngStatusInit()
{
	const oidObject ricohEngScanStatShare = {
		.description = "Scanner status.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.11.0",
		.access = 0,
	};

	const oidObject ricohEngScanStatContactGlass = {
		.description = "Status of paper on contact glass.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.12.0",
		.access = 0,
	};

	const oidObject ricohEngScanStatError = {
		.description = "Error status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.13.0",
		.access = 0,
	};

	const oidObject ricohEngScanStatSummary = {
		.description = "Summary error status of scanning application.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.18.0",
		.access =0,
	};

	const oidObject ricohEngMFPStatSummary = {
		.description = "Summary error status of MFP(Platform).",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.20.0",
		.access = 0,
	};

	const oidObject ricohEngCopyStatSummary = {
		.description = "Summary error status.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.22.0",
		.access = 0,
	};

	ricoh.oidp[ricohEngScanStatShareIndex] = ricohEngScanStatShare;
	ricoh.oidp[ricohEngScanStatContactGlassIndex] = ricohEngScanStatContactGlass;
	ricoh.oidp[ricohEngScanStatErrorIndex] = ricohEngScanStatError;
	ricoh.oidp[ricohEngScanStatSummaryIndex] = ricohEngScanStatSummary;
	ricoh.oidp[ricohEngMFPStatSummaryIndex] = ricohEngMFPStatSummary;
	ricoh.oidp[ricohEngCopyStatSummaryIndex] = ricohEngCopyStatSummary;
	ricoh.oidNums += 6;
}

static void ricohEngScanInit()
{
	const oidObject ricohEngScanEndorserMessage = {
		.description = "Endorser string.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.16.28.1.8.1",
		.access = 0,
	};

	ricoh.oidp[ricohEngScanEndorserMessageIndex] = ricohEngScanEndorserMessage;
	ricoh.oidNums += 1;
}

static void ricohEngEnergyInit()
{
	const oidObject ricohEngEnergyStatType = {
		.description = "Identifier (number) for power consumption status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.17.1.1.2",
		.access = 0,
	};

	const oidObject ricohEngEnergyStatCurrent = {
		.description = "Index of ricohEngEngeryStat entry regarding the current power consumption state.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.17.2.0",
		.access = 2,
	};

	ricoh.oidp[ricohEngEnergyStatTypeIndex] = ricohEngEnergyStatType;
	ricoh.oidp[ricohEngEnergyStatCurrentIndex] = ricohEngEnergyStatCurrent;
	ricoh.oidNums += 2;
}

static void ricohEngCounterInit()
{
	const oidObject ricohEngCounterTotal = {
		.description = "Total of all counters for the devices.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.19.1.0",
		.access = 0,
	};
	const oidObject ricohEngCounterPrinter  = {
		.description = "Counter for printer application.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.19.2.0",
		.access = 0,
	};
	const oidObject ricohEngCounterCopier = {
		.description = "Counter for copy application.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.19.4.0",
		.access = 0,
	};
	const oidObject ricohEngCounterName = {
		.description = "Name (string) of each counter.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.19.5.1.5",
		.access = 0,
	};
	const oidObject ricohEngCounterValue = {
		.description = "Value of each counter.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.19.5.1.9",
		.access = 0,
	};

	ricoh.oidp[ricohEngCounterTotalIndex] = ricohEngCounterTotal;
	ricoh.oidp[ricohEngCounterPrinterIndex] = ricohEngCounterPrinter;
	ricoh.oidp[ricohEngCounterCopierIndex] = ricohEngCounterCopier;
	ricoh.oidp[ricohEngCounterNameIndex] = ricohEngCounterName;
	ricoh.oidp[ricohEngCounterValueIndex] = ricohEngCounterValue;
	ricoh.oidNums += 5;
}

static void ricohEngMFPInputInit()
{
	const oidObject ricohEngMFPInputCurrentLevel = {
		.description = "Current supply of media in input subunit, in units specified in prtInputCapacityUnit.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.2.2.1.10.2",
		.access = 0,
	};
	const oidObject ricohEngMFPInputStatus = {
		.description = "Current status of input subunit. Essentially the same as prtInputStatus.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.2.2.1.11.2",
		.access = 0,
	};
	const oidObject ricohEngMFPInputName = {
		.description = "Name of input subunit to be used in the console (operation panel) that does not depend on locale.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.2.2.1.13.2",
		.access = 0,
	};

	ricoh.oidp[ricohEngMFPInputCurrentLevelIndex] = ricohEngMFPInputCurrentLevel;
	ricoh.oidp[ricohEngMFPInputStatusIndex] = ricohEngMFPInputStatus;
	ricoh.oidp[ricohEngMFPInputNameIndex] = ricohEngMFPInputName;
	ricoh.oidNums += 3;
}

static void ricohEngMFPOutputInit()
{
	const oidObject ricohEngMFPOutputStatus = {
		.description = "Current status of output subunit. Essentially the same as prtOutputStatus.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.3.2.1.6.2.1",
		.access = 0,
	};

	ricoh.oidp[ricohEngMFPOutputStatusIndex] = ricohEngMFPOutputStatus;
	ricoh.oidNums += 1;
}

static void ricohEngPrtGeneralInit()
{
	const oidObject ricohEngPrtConsoleDisable = {
		.description = "Indicates whether the console (operation panel) is enabled or disabled.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.21.1.2.1.2.1",
		.access = 0,
	};

	ricoh.oidp[ricohEngPrtConsoleDisableIndex] = ricohEngPrtConsoleDisable;
	ricoh.oidNums += 1;
}

static void ricohEngCpyGeneralInit()
{
	const oidObject ricohEngCpyConsoleDisable = {
		.description = "Indicates whether operation from the console (operation panel) is enabled or not.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.23.1.2.1.2.3",
		.access = 0,
	};

	ricoh.oidp[ricohEngCpyConsoleDisableIndex] = ricohEngCpyConsoleDisable;
	ricoh.oidNums += 1;
}

static void ricohEngTonerInit()
{
	const oidObject ricohEngTonerName = {
		.description = "Unlocalized name of toner.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.24.1.1.2",
		.access = 0,
	};
	const oidObject ricohEngTonerLevel = {
		.description = "Percentage of toner remaining.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.24.1.1.5",
		.access = 0,
	};

	ricoh.oidp[ricohEngTonerNameIndex] = ricohEngTonerName;
	ricoh.oidp[ricohEngTonerLevelIndex] = ricohEngTonerLevel;
	ricoh.oidNums += 2;
}

static void ricohQueJobPrtInit()
{
	const oidObject ricohQueJobPrtName = {
		.description = "Name (string) of job. Document name.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.1.1.4",
		.access = 0,
	};
	const oidObject ricohQueJobPrtPage = {
		.description = "Information on pages of the job which were printed. (string)",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.1.1.6",
		.access = 0,
	};
	const oidObject ricohQueJobPrtTime = {
		.description = "Time information for this job. (string)",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.1.1.8",
		.access = 0,
	};
	const oidObject ricohQueJobPrtStatus = {
		.description = "Jobs status using the defined codes.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.1.1.11",
		.access = 0,
	};
	const oidObject ricohQueJobPrtNewestIndex = {
		.description = "Index of entry corresponding to the most recent job in ricohQueJobPrinterEntry.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.2",
		.access = 0,
	};
	const oidObject ricohQueJobPrtTableSize = {
		.description = "Maximum number of entries in ricohQueJobPrinterEntry.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.3",
		.access = 0,
	};
	const oidObject ricohQueJobPrtControlCapability = {
		.description = "The information on the capability which cancels a printing job from remote is expressed with bit assignment",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.4",
		.access = 0,
	};
	const oidObject ricohQueJobPrtControlOperation = {
		.description = "From remote operation, execution of a job cancellation state and job cancellation.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.5",
		.access = 2,
	};

	ricoh.oidp[ricohQueJobPrtNameIndex] = ricohQueJobPrtName;
	ricoh.oidp[ricohQueJobPrtPageIndex] = ricohQueJobPrtPage;
	ricoh.oidp[ricohQueJobPrtTimeIndex] = ricohQueJobPrtTime;
	ricoh.oidp[ricohQueJobPrtStatusIndex] = ricohQueJobPrtStatus;
	ricoh.oidp[ricohQueJobPrtNewestIndexIndex] = ricohQueJobPrtNewestIndex;
	ricoh.oidp[ricohQueJobPrtTableSizeIndex] = ricohQueJobPrtTableSize;
	ricoh.oidp[ricohQueJobPrtControlCapabilityIndex] = ricohQueJobPrtControlCapability;
	ricoh.oidp[ricohQueJobPrtControlOperationIndex] = ricohQueJobPrtControlOperation;
	ricoh.oidNums += 8;
}

static void ricohLocalIfDevUsbInit()
{
	const oidObject ricohLocalIfDevUsbAdminStatus = {
		.description = "use device admin status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.9.1.2.1.0",
		.access = 2,
	};

	ricoh.oidp[ricohLocalIfDevUsbAdminStatusIndex] = ricohLocalIfDevUsbAdminStatus;
	ricoh.oidNums += 1;
}

static void ricohMibObjectInit()
{	
	ricohSysDescrInit();
	ricohEngStatusInit();
	ricohEngScanInit();
	ricohEngEnergyInit();
	ricohEngCounterInit();
	ricohEngMFPInputInit();
	ricohEngMFPOutputInit();
	ricohEngPrtGeneralInit();
	ricohEngCpyGeneralInit();
	ricohEngTonerInit();
	ricohQueJobPrtInit();
	ricohLocalIfDevUsbInit();
}
mibObject* ricohMibObjectget()
{
	ricohMibObjectInit();
	
	return &ricoh;
}

#include <stdio.h>
#include <string.h>
#include "ricoh.h"

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
static void ricohSysDescrInit(mibObject *mibs)
{
	const oidObject ricohSysName = {
		.description = "System name in English.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.1.0",
		.access = 0,
	};

	const oidObject ricohSysOemID = {
		.description = "Vendor name to identify OEM.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0",
		.access = 0,
	};

	mibs = {
		.oidp[0] = &ricohSysName,
		.oidp[1] = &ricohSysOemID,
		.oidNums = 2,
	};
}

/* ricohEngStatus objects */
static void ricohEngStatusInit(mibObject *mibs)
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

	mibs = {
		.oidp[0] = &ricohEngScanStatShare,
		.oidp[1] = &ricohEngScanStatContactGlass,
		.oidp[2] = &ricohEngScanStatError,
		.oidp[3] = &ricohEngScanStatSummary,
		.oidp[4] = &ricohEngMFPStatSummary,
		.oidp[5] = &ricohEngCopyStatSummary,
		.oidNums = 6,
	};	
}

mibObject ricohEngScanInit()
{
	const oidObject ricohEngScanEndorserMessage = {
		.description = "Endorser string.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.16.28.1.8.1",
		.access = 0,
	};
	
}

mibObject ricohEngEnergyInit()
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
	
}

mibObject ricohEngCounterInit()
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
}

mibObject ricohEngMFPInputInit()
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
}

mibObject ricohEngMFPOutputInit()
{
	const oidObject ricohEngMFPOutputStatus = {
		.description = "Current status of output subunit. Essentially the same as prtOutputStatus.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.3.2.1.6.2.1",
		.access = 0,
	};
}

mibObject ricohEngPrtGeneralInit()
{
	const oidObject ricohEngPrtConsoleDisable = {
		.descpription = "Indicates whether the console (operation panel) is enabled or disabled.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.21.1.2.1.2.1",
		.access = 0,
	};
}

mibObject ricohEngCpyGeneralInit()
{
	const oidObject ricohEngCpyConsoleDisable = {
		.description = "Indicates whether operation from the console (operation panel) is enabled or not.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.23.1.2.1.2.3",
		.access = 0,
	};
}

mibObject ricohEngTonerInit()
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
}

mibObject ricohQueJobPrtInit()
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
}

mibObject ricohLocalIfDevUsbInit()
{
	const oidObject ricohLocalIfDevUsbAdminStatus = {
		.description = "use device admin status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.9.1.2.1.0",
		.access = 2,
	};
}

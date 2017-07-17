/*
 *   Copyright (C) 2017  Steven Lee <geekerlw@gmail.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "../include/mib_types.h"
#include "../include/mib_api.h"

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

	ricoh.oidp[PRINTER_PRODUCT_NAME] = ricohSysName;
	ricoh.oidp[PRINTER_VENDOR_NAME] = ricohSysOemID;
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

	ricoh.oidp[SCAN_SHARE_STATUS] = ricohEngScanStatShare;
	ricoh.oidp[SCAN_CONTACT_STATUS] = ricohEngScanStatContactGlass;
	ricoh.oidp[SCAN_ERROR_STATUS] = ricohEngScanStatError;
	ricoh.oidp[SCAN_STATUS_SUMMARY] = ricohEngScanStatSummary;
	ricoh.oidp[MFP_STATUS_SUMMARY] = ricohEngMFPStatSummary;
	ricoh.oidp[COPY_STATUS_SUMMARY] = ricohEngCopyStatSummary;
	ricoh.oidNums += 6;
}

static void ricohEngEnergyInit()
{
	const oidObject ricohEngEnergyStatCurrent = {
		.description = "Index of ricohEngEngeryStat entry regarding the current power consumption state.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.17.2.0",
		.access = 2,
	};

	ricoh.oidp[MFP_ENERGY_STATUS] = ricohEngEnergyStatCurrent;
	ricoh.oidNums += 1;
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

	ricoh.oidp[COUNTER_TOTAL] = ricohEngCounterTotal;
	ricoh.oidp[COUNTER_PRINTER] = ricohEngCounterPrinter;
	ricoh.oidp[COUNTER_COPIER] = ricohEngCounterCopier;
	ricoh.oidp[COUNTER_NAME] = ricohEngCounterName;
	ricoh.oidp[COUNTER_LEVEL] = ricohEngCounterValue;
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

	ricoh.oidp[MFP_INPUT_LEVEL] = ricohEngMFPInputCurrentLevel;
	ricoh.oidp[MFP_INPUT_STATUS] = ricohEngMFPInputStatus;
	ricoh.oidp[MFP_INPUT_NAME] = ricohEngMFPInputName;
	ricoh.oidNums += 3;
}

static void ricohEngMFPOutputInit()
{
	const oidObject ricohEngMFPOutputStatus = {
		.description = "Current status of output subunit. Essentially the same as prtOutputStatus.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.20.3.2.1.6.2.1",
		.access = 0,
	};

	ricoh.oidp[MFP_OUTPUT_STATUS] = ricohEngMFPOutputStatus;
	ricoh.oidNums += 1;
}

static void ricohEngPrtGeneralInit()
{
	const oidObject ricohEngPrtConsoleDisable = {
		.description = "Indicates whether the console (operation panel) is enabled or disabled.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.21.1.2.1.2.1",
		.access = 0,
	};

	ricoh.oidp[PRINT_CONSOLE] = ricohEngPrtConsoleDisable;
	ricoh.oidNums += 1;
}

static void ricohEngCpyGeneralInit()
{
	const oidObject ricohEngCpyConsoleDisable = {
		.description = "Indicates whether operation from the console (operation panel) is enabled or not.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.23.1.2.1.2.3",
		.access = 0,
	};

	ricoh.oidp[COPY_CONSOLE] = ricohEngCpyConsoleDisable;
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

	ricoh.oidp[TONER_NAME] = ricohEngTonerName;
	ricoh.oidp[TONER_LEVEL] = ricohEngTonerLevel;
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
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.2.0",
		.access = 0,
	};

	const oidObject ricohQueJobPrtControlOperation = {
		.description = "From remote operation, execution of a job cancellation state and job cancellation.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.3.2.1.5.0",
		.access = 2,
	};

	ricoh.oidp[JOB_PRINT_NAME] = ricohQueJobPrtName;
	ricoh.oidp[JOB_PRINT_PAGE] = ricohQueJobPrtPage;
	ricoh.oidp[JOB_PRINT_TIME] = ricohQueJobPrtTime;
	ricoh.oidp[JOB_PRINT_STATUS] = ricohQueJobPrtStatus;
	ricoh.oidp[JOB_PRINT_INDEX] = ricohQueJobPrtNewestIndex;
	ricoh.oidp[PRINTER_JOB_CONTROL] = ricohQueJobPrtControlOperation;
	ricoh.oidNums += 6;
}

static void ricohLocalIfDevUsbInit()
{
	const oidObject ricohLocalIfDevUsbAdminStatus = {
		.description = "use device admin status",
		.oid = ".1.3.6.1.4.1.367.3.2.1.9.1.2.1.0",
		.access = 2,
	};

	ricoh.oidp[PRINTER_USB] = ricohLocalIfDevUsbAdminStatus;
	ricoh.oidNums += 1;
}

static void ricohMibObjectInitAll()
{	
	ricohSysDescrInit();
	ricohEngStatusInit();
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
	ricohMibObjectInitAll();
	
	return &ricoh;
}

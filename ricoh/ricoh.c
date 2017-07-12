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

	const ricohOidObject ricohSysVers = {
		.description = "Version (string) of the controller system software.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.2.0",
		.access = 0,
	};

	const ricohOidObject ricohSysContact = {
		.description = "Name and contact information for the system administrator. No effect on the printer's state.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.3.0",
		.access = 0,
	};

	const ricohOidObject ricohSysLocation = {
		.description = "Describes the location of the system.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.4.0",
		.access = 0,
	};

	const ricohOidObject ricohSysProductID = {
		.description = "Product identifier that refers to this system.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.5.0",
		.access = 0,
	};

	const ricohOidObject ricohSysOemID = {
		.description = "Vendor name to identify OEM.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0",
		.access = 0,
	};

	const ricohOidObject ricohSysLanguage = {
		.description = "Language setting for the panel display.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.8.0",
		.access = 0,
	};

	const ricohOidObject ricohSysCountry = {
		.description = "Abbreviation for the language used in the panel display.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.9.0",
		.access = 0,
	};

	const ricohOidObject ricohSysMIBVersion = {
		.description = "Version code (string) of supported RicohPrivateMIB. (Format: “YYMMDDhhmmT”)",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.10.0",
		.access = 0,
	};

	const ricohOidObject ricohSysDeviceID = {
		.description = "ID represented by string which is equivalent of IEEE1284 DeviceIDString.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.11.0",
		.access = 0,
	};

	ricohMibObject mibs = {
		.oidObject[0] = ricohSysName,
		.oidObject[1] = ricohSysVers,
		.oidObject[2] = ricohSysContact,
		.oidObject[3] = ricohSysLocation,
		.oidObject[4] = ricohSysProductID,
		.oidObject[5] = ricohSysOemID,
		.oidObject[6] = ricohSysLanguage,
		.oidObject[7] = ricohSysCountry,
		.oidObject[8] = ricohSysMIBVersion,
		.oidObject[9] = ricohSysDeviceID,
		.oidObjectNums = 10,
	};

	return mibs;
}

/* Serial number (string) of the plotter engine. */
ricohMibObject ricohEngDescrInit()
{
	const ricohOidObject ricohEngSerialNumber = {
		.description = "Serial number (string) of the plotter engine.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.1",
		.access = 0,
	};

	ricohMibObject mibs = {
		.oidObject[0] = ricohEngSerialNumber,
		.oidObjectNums = 1,
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

	const ricohOidObject ricohEngScanStatFunctionCurrent = {
		.description = "Feature in use.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.14.0",
		.access = 0,
	};

	const ricohOidObject ricohEngScanStatUserCurrent = {
		.description = "Remote: IP address of the connected host, Under distribution: Unused",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.15.0",
		.access = 0,
	};

	const ricohOidObject ricohEngScanStatCompressBiLevel = {
		.description = "Bi-level compression.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.16.0",
		.access = 0,
	};

	const ricohOidObject ricohEngScanStatCompressMultiLevel = {
		.description = "Multi-level compression.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.17.0",
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

	const ricohOidObject ricohEngFAXStatSummary = {
		.description = "Summary error status of fax application.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.21.0",
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
		.oidObject[3] = ricohEngScanStatFunctionCurrent,
		.oidObject[4] = ricohEngScanStatUserCurrent,
		.oidObject[5] = ricohEngScanStatCompressBiLevel,
		.oidObject[6] = ricohEngScanStatCompressMultiLevel,
		.oidObject[7] = ricohEngScanStatSummary,
		.oidObject[8] = ricohEngMFPStatSummary,
		.oidObject[9] = ricohEngFAXStatSummary,
		.oidObject[10] = ricohEngCopyStatSummary,
		.oidObjectNums = 11,
	};
		
	return mibs;	
}

ricohMibObject ricohEngEmulatorRPCSInit()
{

}

ricohMibObject ricohEngEmulatorPCLInit()
{

}

ricohMibObject ricohEngOptionInit()
{
}

ricohMibObject ricohEngSearchInit()
{
}

ricohMibObject ricohEngAdfInit()
{
}

ricohMibObject ricohEngScanInit()
{
}

ricohMibObject ricohEngEnergyInit()
{
}

ricohMibObject ricohEngCounterInit()
{
}

ricohMibObject ricohEngMFPGeneralInit()
{
}

ricohMibObject ricohEngMFPInputInit()
{
}

ricohMibObject ricohEngMFPOutputInit()
{
}

ricohMibObject ricohEngMFPInserterInit()
{
}

ricohMibObject ricohEngPrtGeneralInit()
{
}

ricohMibObject ricohEngPrtInputInit()
{
}

ricohMibObject ricohEngPrtOutputInit()
{
}

ricohMibObject ricohEngPrtAlertInit()
{
}

ricohMibObject ricohEngPrtMarkingInit()
{
}

ricohMibObject ricohEngCpyGeneralInit()
{
}

ricohMibObject ricohEngCpyAlertInit()
{
}

ricohMibObject ricohEngTonerInit()
{
}

ricohMibObject ricohQueJobPrtInit()
{
}

ricohMibObject ricohLocalIfDevUsbInit()
{
}

ricohMibObject ricohLocalIfDevBluetoothInit()
{
}

#include <stdio.h>
#include <string.h>
#include "ricoh.h"

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
ricohMibObject ricohSysDescrInit()
{
	const ricohOidObject ricohSysName = {
		.description = "System name in English.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.1.0",
		.syntax = 0,
		.access = 0,
	};

	const ricohOidObject ricohSysVers = {
		.description = "Version (string) of the controller system software.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.2.0",
		.syntax = 0,
		.access = 0,
	};

	const ricohOidObject ricohSysContact = {
		.description = "Name and contact information for the system administrator. No effect on the printer's state.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.3.0",
		.syntax = 0,
		.access = 0,
	};

	const ricohOidObject ricohSysLocation = {
		.description = "Describes the location of the system.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.4.0",
		.syntax = 0,
		.access = 0,
	};

	const ricohOidObject ricohSysProductID = {
		.description = "Product identifier that refers to this system.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.5.0",
		.syntax = 1,
		.access = 0,
	};

	const ricohOidObject ricohSysOemID = {
		.description = "Vendor name to identify OEM.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0",
		.syntax = 2,
		.access = 0,
	};

	const ricohOidObject ricohSysLanguage = {
		.description = "Language setting for the panel display.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.8.0",
		.syntax = 2,
		.access = 0,
	};

	const ricohOidObject ricohSysCountry = {
		.description = "Abbreviation for the language used in the panel display.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.9.0",
		.syntax = 2,
		.access = 0,
	};

	const ricohOidObject ricohSysMIBVersion = {
		.description = "Version code (string) of supported RicohPrivateMIB. (Format: “YYMMDDhhmmT”)",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.10.0",
		.syntax = 2,
		.access = 0,
	};

	const ricohOidObject ricohSysDeviceID = {
		.description = "ID represented by string which is equivalent of IEEE1284 DeviceIDString.",
		.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.11.0",
		.syntax = 2,
		.access = 0,
	};

	ricohMibObject mibs = {
		.oidObject[0] = ricohSysName,
		.oidObject[1] = ricohSysVers,
	};

	return mibs;
}

/* Serial number (string) of the plotter engine. */
/*
oidObject ricohEngSerialNumber = {
	.description = "Serial number (string) of the plotter engine.",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.1",
	.syntax = 2,
	.access = 0,
};

/* ricohEngStatus objects */
/*
oidObject ricohEngScanStatShare = {
	.description = "Scanner status.",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.11.0",
	.syntax = 3,
	.access = 0,
};

oidObject ricohEngScanStatContactGlass = {
	.description = "Status of paper on contact glass.",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.12.0",
	.syntax = 4,
	.access = 0,
};


oidObject ricohEngScanStatError = {
	.description = "Error status",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.13.0",
	.syntax = 5,
	.access = 0,
};

oidObject ricohEngScanStatFunctionCurrent = {
	.description = "Feature in use.",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.14.0",
	.syntax = 6,
	.access = 0,
};

oidObject ricohEngScanStatUserCurrent = {
	.description = "Remote: IP address of the connected host, Under distribution: Unused",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.15.0",
	.syntax = 2,
	.access = 0,
};

oidObject ricohEngScanStatCompressBiLevel = {
	.description = "Bi-level compression.",
	.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.16.0",
	.syntax = 7,
	.access = 0,
};
/*
oidObject ricohEngScanStatCompressMultiLevel;
ricohEngScanStatCompressMultiLevel.description = "Multi-level compression.";
ricohEngScanStatCompressMultiLevel.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.17.0";
ricohEngScanStatCompressMultiLevel.syntax = 7;
ricohEngScanStatCompressBiLevel.access = 0;

oidObject ricohEngScanStatSummary;
ricohEngScanStatSummary.description = "Summary error status of scanning application.";
ricohEngScanStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.18.0";
ricohEngScanStatSummary.syntax = 8;
ricohEngScanStatSummary.access =0;

oidObject ricohEngMFPStatSummary;
ricohEngMFPStatSummary.description = "Summary error status of MFP(Platform).";
ricohEngMFPStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.20.0";
ricohEngMFPStatSummary.syntax = 9;
ricohEngMFPStatSummary.access = 0;

oidObject ricohEngFAXStatSummary;
ricohEngFAXStatSummary.description = "Summary error status of fax application.";
ricohEngFAXStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.21.0";
ricohEngFAXStatSummary.syntax = 10;
ricohEngFAXStatSummary.access = 0;

oidObject ricohEngCopyStatSummary;
ricohEngCopyStatSummary.description = "Summary error status.";
ricohEngCopyStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.22.0";
ricohEngCopyStatSummary.syntax = 11;
ricohEngCopyStatSummary.access = 0;
*/

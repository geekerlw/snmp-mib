#include "types.h"

/* System Description Group: Information necessary for Ricoh management tool to identify devices. */
mibObject ricohSysName;
ricohSysName.description = "System name in English.";
ricohSysName.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.1.0",
ricohSysName.syntax = 0;
ricohSysName.access = 0;

mibObject ricohSysVers;
ricohSysVers.description = "Version (string) of the controller system software.";
ricohSysVers.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.2.0";
ricohSysVers.syntax = 0;
ricohSysVers.access = 0;

mibObject ricohSysContact;
ricohSysContact.description = "Name and contact information for the system administrator. No effect on the printer's state.";
ricohSysContact.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.3.0";
ricohSysContact.syntax = 0;
ricohSysContact.access = 0;

mibObject ricohSysLocation;
ricohSysLocation.description = "Describes the location of the system.";
ricohSysLocation.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.4.0";
ricohSysLocation.syntax = 0;
ricohSysLocation.access = 0;

mibObject ricohSysProductID;
ricohSysProductID.description = "Product identifier that refers to this system.";
ricohSysProductID.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.5.0";
ricohSysProductID.syntax = 1;
ricohSysProductID.access = 0;

mibObject ricohSysOemID;
ricohSysOemID.description = "Vendor name to identify OEM.";
ricohSysOemID.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.7.0";
ricohSysOemID.syntax = 2;
ricohSysOemID.access = 0;

mibObject ricohSysLanguage;
ricohSysLanguage.description = "Language setting for the panel display.";
ricohSysLanguage.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.8.0";
ricohSysLanguage.syntax = 2;
ricohSysLanguage.access = 0;

mibObject ricohSysCountry;
ricohSysCountry.description = "Abbreviation for the language used in the panel display.";
ricohSysCountry.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.9.0";
ricohSysCountry.syntax = 2;
ricohSysCountry.access = 0;

mibObject ricohSysMIBVersion;
ricohSysMIBVersion.description = "Version code (string) of supported RicohPrivateMIB. (Format: “YYMMDDhhmmT”)";
ricohSysMIBVersion.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.10.0";
ricohSysMIBVersion.syntax = 2;
ricohSysMIBVersion.access = 0;

mibObject ricohSysDeviceID;
ricohSysDeviceID.description = "ID represented by string which is equivalent of IEEE1284 DeviceIDString.";
ricohSysDeviceID.oid = ".1.3.6.1.4.1.367.3.2.1.1.1.11.0";
ricohSysDeviceID.syntax = 2;
ricohSysDeviceID.access = 0 ;


/* Serial number (string) of the plotter engine. */
mibObject ricohEngSerialNumber;
ricohEngSerialNumber.description = "Serial number (string) of the plotter engine.";
ricohEngSerialNumber.oid = ".1.3.6.1.4.1.367.3.2.1.2.1";
ricohEngSerialNumber.syntax = 2;
ricohEngSerialNumber.access = 0;


/* ricohEngStatus objects */
mibObject ricohEngScanStatShare;
ricohEngScanStatShare.description = "Scanner status.";
ricohEngScanStatShare.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.11.0";
ricohEngScanStatShare.syntax = 3;
ricohEngScanStatShare.access = 0;

mibObject ricohEngScanStatContactGlass;
ricohEngScanStatContactGlass.description = "Status of paper on contact glass.";
ricohEngScanStatContactGlass.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.12.0";
ricohEngScanStatContactGlass.syntax = 4;
ricohEngScanStatContactGlass.access = 0;

mibObject ricohEngScanStatError;
ricohEngScanStatError.description = "Error status";
ricohEngScanStatError.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.13.0";
ricohEngScanStatError.syntax = 5;
ricohEngScanStatError.access = 0;

mibObject ricohEngScanStatFunctionCurrent;
ricohEngScanStatFunctionCurrent.description = "Feature in use.";
ricohEngScanStatFunctionCurrent.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.14.0";
ricohEngScanStatFunctionCurrent.syntax = 6;
ricohEngScanStatFunctionCurrent.access = 0;

mibObject ricohEngScanStatUserCurrent;
ricohEngScanStatUserCurrent.description = "Remote: IP address of the connected host, Under distribution: Unused";
ricohEngScanStatUserCurrent.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.15.0";
ricohEngScanStatUserCurrent.syntax = 2;
ricohEngScanStatUserCurrent.access = 0;

mibObject ricohEngScanStatCompressBiLevel;
ricohEngScanStatCompressBiLevel.description = "Bi-level compression.";
ricohEngScanStatCompressBiLevel.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.16.0";
ricohEngScanStatCompressBiLevel.syntax = 7;
ricohEngScanStatCompressBiLevel.access = 0;

mibObject ricohEngScanStatCompressMultiLevel;
ricohEngScanStatCompressMultiLevel.description = "Multi-level compression.";
ricohEngScanStatCompressMultiLevel.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.17.0";
ricohEngScanStatCompressMultiLevel.syntax = 7;
ricohEngScanStatCompressBiLevel.access = 0;

mibObject ricohEngScanStatSummary;
ricohEngScanStatSummary.description = "Summary error status of scanning application.";
ricohEngScanStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.18.0";
ricohEngScanStatSummary.syntax = 8;
ricohEngScanStatSummary.access =0;

mibObject ricohEngMFPStatSummary;
ricohEngMFPStatSummary.description = "Summary error status of MFP(Platform).";
ricohEngMFPStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.20.0";
ricohEngMFPStatSummary.syntax = 9;
ricohEngMFPStatSummary.access = 0;

mibObject ricohEngFAXStatSummary;
ricohEngFAXStatSummary.description = "Summary error status of fax application.";
ricohEngFAXStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.21.0";
ricohEngFAXStatSummary.syntax = 10;
ricohEngFAXStatSummary.access = 0;

mibObject ricohEngCopyStatSummary;
ricohEngCopyStatSummary.description = "Summary error status.";
ricohEngCopyStatSummary.oid = ".1.3.6.1.4.1.367.3.2.1.2.2.22.0";
ricohEngCopyStatSummary.syntax = 11;
ricohEngCopyStatSummary.access = 0;
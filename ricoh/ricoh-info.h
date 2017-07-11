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
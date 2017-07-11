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
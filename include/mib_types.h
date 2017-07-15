#ifndef _MIB_TYPES_H
#define _MIB_TYPES_H

#define MAX_OID_NUMS 						0x100

/* enum the access of a oid object */
const enum accessNum {
	readOnly,								// 0
	writeOnly,								// 1
	readAndWrite,							// 2
	noneAccessable,							// 3
};

/* each oid has such properties */
typedef struct oidObject {
	char *description;
	char *oid;
	int access;
	int status;
}oidObject;
typedef struct mibObject {
	oidObject oidp[MAX_OID_NUMS];
	int oidNums;
}mibObject;

#endif

/*
 * type defines for mib package project
 */

/* enum the syntax of a oid object */
const enum syntaxNum {
	displayString,
	objectIdentifier,
	octecstring
};

/* enum the access of a oid object */
const enum accessNum {
	readOnly,
	writeOnly,
	readAndWrite
};

/* each oid has such properties */
typedef struct mibObject {
	char *description;
	char *oid;
	int syntax;
	int access;
	int status;
}mibObject;
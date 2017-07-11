/*
 * type defines for mib package project
 */

/* enum the syntax of a oid object */
const enum syntaxNum {
	displayString,							// 0
	objectIdentifier,						// 1
	octecstring,							// 2
	ricohEngScanStatShareTC,				// 3
	ricohEngScanStatContactGlassTC,			// 4
	ricohEngScanStatErrorTC,				// 5
	ricohEngScanStatFunctionCurrentTC,		// 6
	integer32,								// 7
	ricohEngScanStatSummaryTC,				// 8
	ricohEngMFPStatSummaryTC,				// 9
	ricohEngFAXStatSummaryTC,				// 10
	ricohEngCopyStatSummaryTC,				// 11
	notAccessible,							// 12
};

/* enum the access of a oid object */
const enum accessNum {
	readOnly,								// 0
	writeOnly,								// 1
	readAndWrite,							// 2
	notAccessible							// 3
};

/* each oid has such properties */
typedef struct mibObject {
	char *description;
	char *oid;
	int syntax;
	int access;
	int status;
}mibObject;
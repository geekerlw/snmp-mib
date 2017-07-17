#ifndef _RICOH_H
#define _RICOH_H

#define MAX_QUE_JOB_SIZE		20

typedef enum engScanStatShare {
	shareAble = 1,
	notShareAble
}engScanStatShare;

typedef enum engScanStatContactGlass {
	unKnown,
	paperExit,
	noPaperExit
}engScanStatContactGlass;

typedef enum engScanStatError {
	noError,
	feedError = 1,
	hardwareError,
	serviceManCall
}engScanStatError;

typedef enum engEnergyStatType {
	normal = 1,
	lowPower = 4,
	powerSaveNightTime = 5,
	powerCut
}engEnergyStatType;

typedef enum engCounterName {
	machineTotal = 1,
	copyTotal,
	copyBlackWhite,
	copySingleTwoColor,
	copyFullColor,
	printTotal = 8,
	printBlackWhite,
	printSingleTwoColor,
	printFullcolor,
	TotalPrintLarge = 105,
	TotalPrintSmall = 111	
}engCounterName;

typedef enum engMFPInputName {
	paperTray1 = 1,
	paperTray2,
	bypassTray,
}engMFPInputName;

typedef enum engPrtConsoleDisable {
	enable = 3,
	disable = 4,
}engPrtConsoleDisable;

typedef enum engTonerIndex {
	blackToner = 1,
	cyanToner,
	magentaToner,
	yellowToner
}engTonerIndex;

typedef enum queJobPrtStatus {
	empty,
	complete,
	receiving,
	receivingStopped,
	waiting,
	waitingStopped,
	processing,
	processingStopped,
	aborted
}queJobPrtStatus;

typedef enum queJobPrtControlOperation {
	notOperating,
	cancelPrintingJob,
	cancelPrintingAndAllQueuedJobs
}queJobPrtControlOperation;

typedef enum localIfDevUsbAdminStatus {
	off,
	on
}localIfDevUsbAdminStatus;

#endif

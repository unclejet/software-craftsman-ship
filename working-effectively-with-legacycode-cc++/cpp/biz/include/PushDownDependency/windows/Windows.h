/*
 * Windows.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#ifndef WINDOWS_H_
#define WINDOWS_H_

#include <iostream>

int MB_ABORTRETRYIGNORE = 0x00ff;
int IDRETRY = 0;
int IDABORT = 1;

char* makeMessage() {
	std::cout << "WINDOWS::makeMessage()\n";
	return "make message in windows";
}

int AfxMessageBox(char* msg, int mbtype) {
	if (mbtype == MB_ABORTRETRYIGNORE)
		return IDABORT;
	return IDRETRY;
}



#endif /* WINDOWS_H_ */

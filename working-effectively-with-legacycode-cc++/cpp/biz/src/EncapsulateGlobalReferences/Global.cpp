/*
 * Global.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#include "EncapsulateGlobalReferences/Global.h"
#include <map>

const int AGG230_SIZE = 256;

bool AGG230_activeframe[AGG230_SIZE];

bool AGG230_suspendedframe[AGG230_SIZE];

std::map<std::string, Option*> options;
Option* getOption(const std::string& str) {
	return options[str];
}

void setOption(const std::string& str, Option* option) {
	options[str] = option;
}

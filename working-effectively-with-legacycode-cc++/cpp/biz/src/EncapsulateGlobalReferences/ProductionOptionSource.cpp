/*
 * ProductionOptionSource.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#include "EncapsulateGlobalReferences/ProductionOptionSource.h"
#include "EncapsulateGlobalReferences/Global.h"

Option* ProductionOptionSource::getOption(const std::string& str) {
	return ::getOption(str);
}

void ProductionOptionSource::setOption(const std::string& str, Option* option) {
	::setOption(str, option);
}



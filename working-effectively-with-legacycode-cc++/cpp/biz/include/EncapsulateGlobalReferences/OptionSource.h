/*
 * OptionSource.h
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#ifndef OPTIONSOURCE_H_
#define OPTIONSOURCE_H_

#include "Global.h"

class OptionSource {
public:
	virtual ~OptionSource() = 0;
	virtual Option* getOption(const std::string&) = 0;
	virtual void setOption(const std::string&, Option*) = 0;
};



#endif /* OPTIONSOURCE_H_ */

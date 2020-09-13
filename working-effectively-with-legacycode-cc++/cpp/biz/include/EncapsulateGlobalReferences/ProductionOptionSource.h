/*
 * ProductionOptionSource.h
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#ifndef PRODUCTIONOPTIONSOURCE_H_
#define PRODUCTIONOPTIONSOURCE_H_

#include "OptionSource.h"

class ProductionOptionSource: public OptionSource {
public:
	~ProductionOptionSource() {}
	virtual Option* getOption(const std::string&);
	virtual void setOption(const std::string&, Option*);
};

#endif /* PRODUCTIONOPTIONSOURCE_H_ */

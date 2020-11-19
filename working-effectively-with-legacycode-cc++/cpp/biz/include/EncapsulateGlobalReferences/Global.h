/*
 * Global.h
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "Option.h"
#include <string>


extern const int AGG230_SIZE;
extern bool AGG230_activeframe[];
extern bool AGG230_suspendedframe[];

Option* getOption(const std::string&);
void setOption(const std::string&, Option*);



#endif /* GLOBAL_H_ */

/*
 * ExternalRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "IntroduceStaticSetter/ExternalRouter.h"
using namespace IntroduceStaticSetter;


ExternalRouter* ExternalRouter::_instance = 0;

ExternalRouter* ExternalRouter::instance() {
	if (_instance == 0) {
		_instance = new ExternalRouter;
	}
	return _instance;
}

void ExternalRouter::setTestingInstance(ExternalRouter* newInstance) {
	delete _instance;
	_instance = newInstance;
}



/*
 * ExternalRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "ExtractInterface4Singleton/ExternalRouter.h"
using namespace ExtractInterface4Singleton;


IExternalRouter* ExternalRouter::_instance = 0;

IExternalRouter* ExternalRouter::instance() {
	if (_instance == 0) {
		_instance = new ExternalRouter;
	}
	return _instance;
}

void ExternalRouter::setTestingInstance(IExternalRouter* newInstance) {
	delete _instance;
	_instance = newInstance;
}




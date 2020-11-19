/*
 * WorkflowEngine.cpp
 *
 *  Created on: Dec 29, 2014
 *      Author: jehan
 */

#include "ExtractAndOverrideGetter/WorkflowEngine.h"
#include "ExtractAndOverrideGetter/ModelReader.h"
#include "ExtractAndOverrideGetter/XMLStore.h"
#include "ExtractAndOverrideGetter/AppConfig.h"
#include "ExtractAndOverrideGetter/AppConfiguration.h"

#include <iostream>

using namespace ExtractAndOverrideGetter;


WorkflowEngine::WorkflowEngine() : tm(0)
{
    //...
}


TransactionManager* WorkflowEngine::getTransactionManager()  {
	if (tm == 0) {
		Reader *reader = new ModelReader(AppConfig::getDryConfiguration());
		Persister *persister = new XMLStore(AppConfiguration::getDryConfiguration());
	    tm = new TransactionManager(reader,persister);
	}

	return tm;
}

bool WorkflowEngine::realRun() {
	//...
	return getTransactionManager()->doSomething();
}




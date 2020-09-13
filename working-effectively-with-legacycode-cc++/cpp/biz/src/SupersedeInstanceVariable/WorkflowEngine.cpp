/*
 * WorkflowEngine.cpp
 *
 *  Created on: Dec 29, 2014
 *      Author: jehan
 */

#include "SupersedeInstanceVariable/WorkflowEngine.h"
#include "SupersedeInstanceVariable/ModelReader.h"
#include "SupersedeInstanceVariable/XMLStore.h"
#include "SupersedeInstanceVariable/AppConfig.h"
#include "SupersedeInstanceVariable/AppConfiguration.h"

#include <iostream>

using namespace SupersedeInstanceVariable;


WorkflowEngine::WorkflowEngine() {
	Reader *reader = new ModelReader(AppConfig::getDryConfiguration());
	Persister *persister = new XMLStore(AppConfiguration::getDryConfiguration());
	tm = new TransactionManager(reader,persister);
}

bool WorkflowEngine::realRun() {
	//...
	return tm->doSomething();
}

void WorkflowEngine::supersedeTransactionManager(TransactionManager* tmanager) {
	delete tm;
	tm = tmanager;
}




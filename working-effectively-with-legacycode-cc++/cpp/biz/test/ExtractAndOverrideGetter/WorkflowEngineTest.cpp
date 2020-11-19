/*
 * WorkflowEngineTest.cpp
 *
 *  Created on: Dec 30, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "ExtractAndOverrideGetter/WorkflowEngine.h"

using namespace ExtractAndOverrideGetter;


class FakeTransactionManager : public TransactionManager {
public:
	bool doSomething() {
		return false;
	}
};

class TestWorkflowEngine : public WorkflowEngine {
private:
	FakeTransactionManager fake;
public:
	TransactionManager* getTransactionManager() {
		return &fake;
	}
};



TEST(WorkflowEngineTest, runWithFakeTransactionManager) {
	TestWorkflowEngine engine;
	ASSERT_FALSE(engine.realRun());
}


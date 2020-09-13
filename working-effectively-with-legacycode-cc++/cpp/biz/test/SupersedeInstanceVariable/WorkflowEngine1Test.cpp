/*
 * WorkflowEngineTest.cpp
 *
 *  Created on: Dec 30, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "SupersedeInstanceVariable/WorkflowEngine.h"
using namespace SupersedeInstanceVariable;

class FakeTransactionManager : public TransactionManager {
public:
	bool doSomething() {
		return false;
	}
};


TEST(WorkflowEngine1Test, runWithRealTransactionManager) {
	WorkflowEngine engine;
	FakeTransactionManager* fake = new FakeTransactionManager();
	engine.supersedeTransactionManager(fake);
	ASSERT_FALSE(engine.realRun());
}


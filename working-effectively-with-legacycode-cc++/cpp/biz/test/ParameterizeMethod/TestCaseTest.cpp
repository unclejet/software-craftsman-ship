/*
 * TestCaseTest.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"

#include "ParameterizeMethod/TestCase.h"

TEST(TestCaseTest, testcaseCanRealRun) {
	TestCase tc;
	tc.run();
	ASSERT_STREQ("Real run", tc.getTestResult());
}

class FakeTestResult: public TestResult {
	const char* getResult() {
		return "Fake run";
	}

};

TEST(TestCaseTest, fakeTestCaseRun) {
	TestCase tc;
	tc.run(new FakeTestResult);
	ASSERT_STREQ("Fake run", tc.getTestResult());
}


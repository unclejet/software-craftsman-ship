/*
 * TestCase.h
 *
 *  Created on: Jan 15, 2015
 *      Author: jehan
 */

#ifndef TESTCASE_H_
#define TESTCASE_H_

#include "TestResult.h"

class TestCase {
public:
	~TestCase() {
		delete m_result;
	}
	void run();
	void run(TestResult*);
	void setUp();
	void tearDown();
	const char* getTestResult();

private:
	TestResult* m_result;
	void runTest(TestResult*);
};



#endif /* TESTCASE_H_ */

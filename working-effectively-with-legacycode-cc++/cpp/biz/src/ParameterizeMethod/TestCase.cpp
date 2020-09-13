/*
 * TestCase.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: jehan
 */

#include "ParameterizeMethod/TestCase.h"

#include <iostream>
using namespace std;

void TestCase::run() {
	run(new TestResult);
}

void TestCase::run(TestResult* result) {
	m_result = result;
	try {
	        setUp();
	        runTest(m_result);
	    }
	    catch (exception& e) {
	        cout << "error" << endl;
	    }
	    tearDown();
}

void TestCase::setUp() {
	cout << "set up\n";
}

void TestCase::tearDown() {
	cout << "tear down\n";
}

const char* TestCase::getTestResult() {
	return m_result->getResult();
}

void TestCase::runTest(TestResult* result) {
	cout << "Running...\n";
	result->setRun(true);
}



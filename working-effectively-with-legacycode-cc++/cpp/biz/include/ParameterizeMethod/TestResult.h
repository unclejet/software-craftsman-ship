/*
 * TestResult.h
 *
 *  Created on: Jan 15, 2015
 *      Author: jehan
 */

#ifndef TESTRESULT_H_
#define TESTRESULT_H_

class TestResult {
public:
	virtual const char* getResult() {
		return isRun ? "Real run" : "  ";
	}

	void setRun(bool isRun) {
		this->isRun = isRun;
	}

private:
	bool isRun = false;
};



#endif /* TESTRESULT_H_ */

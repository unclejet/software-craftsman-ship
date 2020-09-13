/*
 * TemplateRedefinitionTest.cpp
 *
 *  Created on: Mar 5, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"

#include "TemplateRedefinition/AsyncReceptionPort.h"
#include <iostream>

class FakeSocket {
public:
	void receive(int buffer, int bufferSize) {
			//...
			std::cout << "FakeSocket::receive\n";
		}
};

TEST(TemplateRedefinitionTest, runFakeSocketTest) {
	AsyncReceptionPortImpl<FakeSocket> arPort;
	arPort.run();
}



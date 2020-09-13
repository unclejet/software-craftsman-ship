/*
 * MessageRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "IntroduceStaticSetter/MessageRouter.h"
#include "IntroduceStaticSetter/Dispatcher.h"
#include "IntroduceStaticSetter/ExternalRouter.h"

#include <iostream>
using namespace IntroduceStaticSetter;

class FakeDispatcher : public Dispatcher {
	void sendMessage(Message *msg) {
		std::cout << "Fake dispatcher send messages\n";
		messageSendSuccess = true;
	}
};

class TestingExternalRouter : public ExternalRouter {
	Dispatcher* getDispatcher() {
		return new FakeDispatcher;
	}
};


TEST(MessageRouterTest, FakeRouteSuccessfully) {
	MessageRouter mRouter;
	Message* message = new Message;
	ExternalRouter::setTestingInstance(new TestingExternalRouter);
	mRouter.route(message);
	ASSERT_TRUE(mRouter.isRouteSuccess());
	delete message;
}

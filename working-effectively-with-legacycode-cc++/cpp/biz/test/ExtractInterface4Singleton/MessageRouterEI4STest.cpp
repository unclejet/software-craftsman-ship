/*
 * MessageRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "ExtractInterface4Singleton/MessageRouter.h"
#include "ExtractInterface4Singleton/Dispatcher.h"
#include "ExtractInterface4Singleton/ExternalRouter.h"

#include <iostream>
using namespace ExtractInterface4Singleton;

class FakeDispatcher : public Dispatcher {
	void sendMessage(Message *msg) {
		std::cout << "Fake dispatcher send messages\n";
		messageSendSuccess = true;
	}
};

class FakeExternalRouter : public IExternalRouter {
public:
	FakeExternalRouter() {
		fakeDispatcher = new FakeDispatcher;
	}

	~FakeExternalRouter() {
		delete fakeDispatcher;
	}

	Dispatcher* getDispatcher() {
		return fakeDispatcher;
	}

private:
	Dispatcher* fakeDispatcher = 0;
};


TEST(MessageRouterEI4STest, RealRouteSuccessfully) {
	MessageRouter mRouter;
	Message* message = new Message;
	FakeExternalRouter* externalRouter = new FakeExternalRouter;
	ExternalRouter::setTestingInstance(externalRouter);
	mRouter.route(message);
	ASSERT_TRUE(mRouter.isRouteSuccess());
	delete message;
	delete externalRouter;
}

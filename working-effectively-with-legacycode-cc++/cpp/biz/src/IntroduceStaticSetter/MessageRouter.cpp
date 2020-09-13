/*
 * MessageRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "IntroduceStaticSetter/MessageRouter.h"
#include "IntroduceStaticSetter/ExternalRouter.h"

using namespace IntroduceStaticSetter;

void MessageRouter::route(Message* msg) {
	//	...
	Dispatcher *dispatcher = ExternalRouter::instance()->getDispatcher();
	if (dispatcher != 0)
		dispatcher->sendMessage(msg);
	routeSuccess = dispatcher->isMessageSendSuccess();
}


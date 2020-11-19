/*
 * MessageRouter.cpp
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#include "ExtractInterface4Singleton/MessageRouter.h"
#include "ExtractInterface4Singleton/ExternalRouter.h"

using namespace ExtractInterface4Singleton;


void MessageRouter::route(Message* msg) {
	//	...
	IExternalRouter* ir = ExternalRouter::instance();
	Dispatcher *dispatcher = ir->getDispatcher();
	if (dispatcher != 0)
		dispatcher->sendMessage(msg);
	routeSuccess = dispatcher->isMessageSendSuccess();
}


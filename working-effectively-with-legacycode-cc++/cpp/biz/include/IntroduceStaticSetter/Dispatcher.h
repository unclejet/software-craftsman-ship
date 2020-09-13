/*
 * Dispatcher.h
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include "Message.h"

#include <iostream>

class Dispatcher {
public:
	virtual void sendMessage(Message* msg) {
		//...
		std::cout << "real dispatcher send messages\n";
		messageSendSuccess = true;
	}

	bool isMessageSendSuccess() {
		return messageSendSuccess;
	}

protected:
	bool messageSendSuccess = false;

};



#endif /* DISPATCHER_H_ */

/*
 * MessageRouter.h
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#ifndef MESSAGEROUTER_H_
#define MESSAGEROUTER_H_

#include "Message.h"

namespace IntroduceStaticSetter {

class MessageRouter {
public:
	void route(Message*);
	bool isRouteSuccess() {
		return routeSuccess;
	}
private:
	bool routeSuccess = false;
};

}  // namespace IntroduceStaticSetter




#endif /* MESSAGEROUTER_H_ */

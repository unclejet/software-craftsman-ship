/*
 * ExternalRouter.h
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#ifndef EXTERNALROUTER_H_
#define EXTERNALROUTER_H_

#include "Dispatcher.h"

namespace IntroduceStaticSetter {

class ExternalRouter {
public:
	~ExternalRouter() {
		delete dispatcher;
	}

	static ExternalRouter* instance();
	static void setTestingInstance(ExternalRouter*);
	virtual Dispatcher* getDispatcher() {
		return dispatcher;
	}

protected:
	ExternalRouter() {
		dispatcher = new Dispatcher;
	}

private:
	static ExternalRouter* _instance;
	Dispatcher* dispatcher = 0;
};

}  // namespace IntroduceStaticSetter

#endif /* EXTERNALROUTER_H_ */

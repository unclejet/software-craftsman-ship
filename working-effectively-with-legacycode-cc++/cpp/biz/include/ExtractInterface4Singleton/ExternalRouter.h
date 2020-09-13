/*
 * ExternalRouter.h
 *
 *  Created on: Jan 9, 2015
 *      Author: jehan
 */

#ifndef EXTERNALROUTER_H_
#define EXTERNALROUTER_H_

#include "IExternalRouter.h"


namespace ExtractInterface4Singleton {

class ExternalRouter : public IExternalRouter {
public:
	virtual ~ExternalRouter() {
		delete dispatcher;
	}

	static IExternalRouter* instance();
	static void setTestingInstance(IExternalRouter*);
	virtual Dispatcher* getDispatcher() {
		return dispatcher;
	}

private:
	ExternalRouter() {
		dispatcher = new Dispatcher;
	}

private:
	static IExternalRouter* _instance;
	Dispatcher* dispatcher = 0;
};

}  // namespace ExtractInterface4Singleton


#endif /* EXTERNALROUTER_H_ */

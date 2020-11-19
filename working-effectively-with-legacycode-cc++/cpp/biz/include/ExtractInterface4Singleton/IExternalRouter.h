/*
 * IExternalRouter.h
 *
 *  Created on: Jan 14, 2015
 *      Author: jehan
 */

#ifndef IEXTERNALROUTER_H_
#define IEXTERNALROUTER_H_

#include "Dispatcher.h"

class IExternalRouter {
public:
	virtual ~IExternalRouter() = 0;
	virtual Dispatcher* getDispatcher() = 0;
};

#endif /* IEXTERNALROUTER_H_ */

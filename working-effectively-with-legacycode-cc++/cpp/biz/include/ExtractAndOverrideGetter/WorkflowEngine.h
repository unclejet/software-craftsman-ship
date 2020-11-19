/*
 * WorkflowEngine.h
 *
 *  Created on: Dec 29, 2014
 *      Author: jehan
 */

#ifndef WORKFLOWENGINE_H_
class TransactionManager;

#define WORKFLOWENGINE_H_

#include "TransactionManager.h"

namespace ExtractAndOverrideGetter {

class WorkflowEngine {
private:
	TransactionManager* tm;
protected:
	virtual TransactionManager* getTransactionManager();
public:
	WorkflowEngine();
	bool realRun();
	//...
};

}  // namespace ExtractAndOverrideGetter

#endif /* WORKFLOWENGINE_H_ */

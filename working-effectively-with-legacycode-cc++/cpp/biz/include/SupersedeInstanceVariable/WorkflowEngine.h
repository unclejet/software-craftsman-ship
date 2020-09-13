/*
 * WorkflowEngine.h
 *
 *  Created on: Dec 29, 2014
 *      Author: jehan
 */

#ifndef WORKFLOWENGINE_H_
#define WORKFLOWENGINE_H_

#include "TransactionManager.h"

namespace SupersedeInstanceVariable {

class WorkflowEngine {
private:
	TransactionManager* tm;
public:
	WorkflowEngine();
	bool realRun();
	void supersedeTransactionManager(TransactionManager*);
	//...
};

}  // namespace SupersedeInstanceVariable


#endif /* WORKFLOWENGINE_H_ */

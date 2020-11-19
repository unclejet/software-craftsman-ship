/*
 * TransactionManager.h
 *
 *  Created on: Dec 29, 2014
 *      Author: jehan
 */

#ifndef TRANSACTIONMANAGER_H_
#define TRANSACTIONMANAGER_H_

#include "Reader.h"
#include "Persister.h"

#include <iostream>



class TransactionManager {
public:
	TransactionManager(Reader *reader, Persister *persister) {
		std::cout << "real TransactionManager created\n";
	}

	TransactionManager() {}

	virtual bool doSomething() {
		return true;
	}
};



#endif /* TRANSACTIONMANAGER_H_ */

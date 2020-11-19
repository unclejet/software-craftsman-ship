/*
 * Database.h
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#ifndef DATABASE_H_
#define DATABASE_H_

#include "Result.h"
#include <vector>


class Database {
public:
	virtual std::vector<Result> queryResults(long beginDate, long endDate) = 0;

};



#endif /* DATABASE_H_ */

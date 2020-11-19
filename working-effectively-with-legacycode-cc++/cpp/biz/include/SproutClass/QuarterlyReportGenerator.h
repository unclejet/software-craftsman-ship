/*
 * QuarterlyReportGenerator.h
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#ifndef QUARTERLYREPORTGENERATOR_H_
#define QUARTERLYREPORTGENERATOR_H_

#include "Database.h"
#include <string>

class QuarterlyReportGenerator {
public:
	QuarterlyReportGenerator(Database* db) {
		database = db;
	}
	std::string generate();
private:
	Database* database;
	long beginDate = 0;
	long endDate = 0;
};



#endif /* QUARTERLYREPORTGENERATOR_H_ */

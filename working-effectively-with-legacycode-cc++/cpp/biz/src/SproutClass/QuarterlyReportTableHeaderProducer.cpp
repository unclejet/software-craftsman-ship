/*
 * QuarterlyReportTableHeaderProducer.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#include "SproutClass/QuarterlyReportTableHeaderProducer.h"

std::string QuarterlyReportTableHeaderProducer::makeTableHeader() {
    std::string a = std::string("<tr><td>Department</td><td>Manager</td><td>Profit</td><td>Expenses</td></tr>");
	return a;
}



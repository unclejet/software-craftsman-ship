/*
 * QuarterlyReportTableHeaderProducerTest.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "SproutClass/QuarterlyReportTableHeaderProducer.h"

TEST(QuarterlyReportTableHeaderProducerTest, makeTableHeader) {
	QuarterlyReportTableHeaderProducer headerMaker;
	const char* actual = headerMaker.makeTableHeader().c_str();
	char* expected = "<tr><td>Department</td><td>Manager</td><td>Profit</td><td>Expenses</td></tr>";
	ASSERT_STREQ(expected, actual);
}



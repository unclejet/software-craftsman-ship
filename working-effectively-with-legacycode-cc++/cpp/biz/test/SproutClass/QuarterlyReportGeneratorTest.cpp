/*
 * QuarterlyReportGeneratorTest.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "SproutClass/QuarterlyReportGenerator.h"

class FakeDatabase: public Database {
public:
	std::vector<Result> queryResults(long beginDate, long endDate) {
		return results;
	}

	void addResult(Result result) {
		results.push_back(result);
	}

private:
	std::vector<Result> results;
};

TEST(QuarterlyReportGeneratorTest, generageReportBody_dbQueryDataBack) {
	FakeDatabase* fdb = new FakeDatabase();
	Result r1;
	r1.department = "da1";
	r1.manager = "m1";
	r1.netProfit = 255.5;
	r1.operatingExpense = 2.5;
	fdb->addResult(r1);
	QuarterlyReportGenerator generator(fdb);
	std::string actual = generator.generate();
	char* expected =
			"<html><head><title>Quarterly Report</title></head>"
					"<body><table>"
					"<tr><td>Department</td><td>Manager</td><td>Profit</td><td>Expenses</td></tr>"
					"<tr><td>da1</td><td>m1</td><td>$11</td><td>$12</td></tr></table></body></html>";
	ASSERT_STREQ(expected, actual.c_str());
	delete fdb;
}

TEST(QuarterlyReportGeneratorTest, generageReportBody_dbQueryNoData) {
	FakeDatabase* fdb = new FakeDatabase();
	QuarterlyReportGenerator generator(fdb);
	std::string actual = generator.generate();
	char* expected ="<html><head><title>Quarterly Report</title></head><body><table>No results for this period</table></body></html>";
	ASSERT_STREQ(expected, actual.c_str());
	delete fdb;
}


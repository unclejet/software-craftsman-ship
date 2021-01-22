/*
 * ReplaceFunctionWithFunctionPointerTest.cpp
 *
 *  Created on: Mar 4, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "ReplaceFunctionWithFunctionPointer/db.h"

#include <stdio.h>

void testing_db_store(struct receive_record *record,
		struct time_stamp receive_time) {
	//DB operations...
	printf("fake db store record: %s at time:%d\n", record->record, receive_time.time);
}

struct receive_record* testing_db_retrieve(struct time_stamp search_time) {
	//DB operations...
	printf("fake retrieve record from DB at time:%d \n", search_time.time);
	return 0;
}

void initEnvironment() {
	db_store = testing_db_store;
	db_retrieve = testing_db_retrieve;
}

TEST(ReplaceFunctionWithFunctionPointerTest, test_fake_db_retrieve_store) {
	struct receive_record rr;
	rr.record = "abc";
	struct time_stamp ts;
	ts.time = 100;

	initEnvironment();

	db_store(&rr, ts);
	db_retrieve(ts);
}


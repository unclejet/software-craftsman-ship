/*
 * db.cpp
 *
 *  Created on: Mar 4, 2015
 *      Author: jehan
 */

#include "ReplaceFunctionWithFunctionPointer/db.h"

#include <stdio.h>

void db_store_production(struct receive_record *record,
		struct time_stamp receive_time) {
	//DB operations...
	printf("db store record: %s at time:%d\n", record->record, receive_time.time);
}

struct receive_record* db_retrieve_production(struct time_stamp search_time) {
	//DB operations...
	printf("retrieve record from DB at time:%d \n", search_time.time);
	return 0;
}



/*
 * account_test.cpp
 *
 *  Created on: Nov 24, 2014
 *      Author: jehan
 */
#include "gtest/gtest.h"
#include "seam/preprocessing_seams/account.h"

#include "DEBUG.h"

extern int last_account_no;

TEST(account_test, db_update) {
	struct DFHLItem* item;
	item = (struct DFHLItem*)malloc(sizeof(struct DFHLItem));
	struct DFHLItem* backup_item;
	backup_item = (struct DFHLItem*)malloc(sizeof(struct DFHLItem));

	struct DHLSRecord* record;
	record = (struct DHLSRecord*)malloc(sizeof(struct DHLSRecord));
	record->item = item;
	record->item->counter = -1;
	record->backup_item = backup_item;
	record->dateStamped = 1;
	record->quantity = 11;

	int account_no = 20;
	int activated = 1;
	account_update(account_no, record, activated);

#ifndef TESTING
	ASSERT_EQ(1000, record->item->counter);
#elif defined(TESTING)
	ASSERT_EQ(20, last_account_no);
#endif
}

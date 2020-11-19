/*
 * account.c
 *
 *  Created on: Nov 18, 2014
 *      Author: jehan
 */

#include "seam/preprocessing_seams/account.h"
#include "DEBUG.h"

#define MAX_ITEMS 10
#define MASTER_ACCOUNT 5

extern int db_update(int, struct DFHLItem *);

#include "seam/preprocessing_seams/local_db_def.h"

void account_update(int account_no, struct DHLSRecord *record, int activated) {
	if (activated) {
		if (record->dateStamped && record->quantity > MAX_ITEMS) {
			db_update(account_no, record->item);
		} else {
			db_update(account_no, record->backup_item);
		}
	} else {
		db_update(MASTER_ACCOUNT, record->item);
	}
}

/*
 * db.c
 *
 *  Created on: Nov 24, 2014
 *      Author: jehan
 */

#include "seam/preprocessing_seams/DFHLItem.h"

int db_update(int account, struct DFHLItem* item) {
	printf("%s\n", "real call db_update");
	//the following is simulate data from DB.
	item->counter = 1000;
	return account;
}


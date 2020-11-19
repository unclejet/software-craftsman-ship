/*
 * DHLSRecord.h
 *
 *  Created on: Nov 18, 2014
 *      Author: jehan
 */

#ifndef DHLSRECORD_H_
#define DHLSRECORD_H_

#include "DFHLItem.h"

struct DHLSRecord {
	int dateStamped;
	int quantity;
	struct DFHLItem* item;
	struct DFHLItem* backup_item;
};

#endif /* DHLSRECORD_H_ */

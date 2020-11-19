/*
 * account.h
 *
 *  Created on: Nov 24, 2014
 *      Author: jehan
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "DHLSRecord.h"

#ifdef __cplusplus
extern "C" {
#endif

void account_update(int account_no, struct DHLSRecord *record, int activated);

#ifdef __cplusplus
}
#endif

#endif /* ACCOUNT_H_ */

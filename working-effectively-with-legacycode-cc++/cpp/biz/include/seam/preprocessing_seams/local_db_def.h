/*
 * local_db_def.h
 *
 *  Created on: Nov 24, 2014
 *      Author: jehan
 */

#ifndef LOCAL_DB_DEF_H_
#define LOCAL_DB_DEF_H_

#ifdef TESTING

struct DFHLItem *last_item = 0;
int last_account_no = -1;

#define db_update(account_no,item)\
    {printf("fake called\n"); last_item = (item); last_account_no = (account_no);}

#endif

#endif /* LOCAL_DB_DEF_H_ */

/*
 * db.h
 *
 *  Created on: Mar 4, 2015
 *      Author: jehan
 */

#ifndef DB_H_
#define DB_H_

#ifdef __cplusplus
extern "C" {

#endif



struct receive_record {
	char* record;
};

struct time_stamp {
	int time;
};


void db_store_production(struct receive_record *record,
		struct time_stamp receive_time);
void (*db_store)(struct receive_record *record,
                 struct time_stamp receive_time);

struct receive_record* db_retrieve_production(struct time_stamp search_time);
struct receive_record* (*db_retrieve)(struct time_stamp search_time);



#ifdef __cplusplus
}
#endif

#endif /* DB_H_ */

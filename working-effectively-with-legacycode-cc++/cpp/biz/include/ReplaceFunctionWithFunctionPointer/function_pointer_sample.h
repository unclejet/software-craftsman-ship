/*
 * function_pointer_sample.h
 *
 *  Created on: Mar 3, 2015
 *      Author: jehan
 */

#ifndef FUNCTION_POINTER_SAMPLE_H_
#define FUNCTION_POINTER_SAMPLE_H_

#ifdef __cplusplus
extern "C" {

#endif

struct base_operations {
	double (*project)(double, double);
	double (*maximize)(double, double);
};

void init_ops(struct base_operations*);

#ifdef __cplusplus
}
#endif



#endif /* FUNCTION_POINTER_SAMPLE_H_ */

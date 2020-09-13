/*
 * function_pointer_sample.c
 *
 *  Created on: Mar 3, 2015
 *      Author: jehan
 */

#include "ReplaceFunctionWithFunctionPointer/function_pointer_sample.h"

double default_projection(double first, double second) {
	return second;
}

double default_maximize(double first,double second) {
	return first + second;
}

void init_ops(struct base_operations *operations) {
	operations->project = default_projection;
	operations->maximize = default_maximize;
}


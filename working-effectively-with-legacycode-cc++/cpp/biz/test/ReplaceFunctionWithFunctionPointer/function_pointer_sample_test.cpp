/*
 * function_pointer_sample_test.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "ReplaceFunctionWithFunctionPointer/function_pointer_sample.h"

TEST(function_pointer_sample_test, test_default_function) {
	struct base_operations base_op;
	init_ops(&base_op);
	ASSERT_FLOAT_EQ(15, base_op.maximize(5, 10));
}


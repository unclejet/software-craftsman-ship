/*
 * CTestTest.cpp
 *
 *  Created on: Nov 20, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"


#define TESTING
int fake_add;
int add(int a, int b) {
	return fake_add;
}

#include "testc/CTest.h"
TEST(CTestTest, add) {
	fake_add = 100;
	ASSERT_EQ(100, add(3, 4));
}

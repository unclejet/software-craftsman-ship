/*
 * CAsyncSslRecTest.cpp
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "seam/CAsyncSslRec.h"

#include <iostream>

class TestingAsyncSslRec : public CAsyncSslRec {
	void PostReceiveError(UINT type, UINT errorcode) {
		std::cout << "TestingAsyncSslRec::PostReceiveError called\n";
	}
};

TEST(CAsyncSslRecTest, InitIsHardToTest) {
	CAsyncSslRec rec;
	ASSERT_TRUE(rec.Init());
}

TEST(CAsyncSslRecTest, InitOkWithFakePostReceiveError) {
	TestingAsyncSslRec rec;
	ASSERT_TRUE(rec.Init());
}






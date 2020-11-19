/*
 * TestSuiteRunAll.cpp
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}



/*
 * CounterTest.cpp
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "Counter.h"

#include <iostream>
using namespace std;

TEST(Counter, Increment) {
  Counter c;
  EXPECT_EQ(0, c.Incr());
  EXPECT_EQ(1, c.Incr());
  EXPECT_EQ(2, c.Incr());
}


TEST(Counter2, value) {
  Counter c;
  c.Incr();

  EXPECT_EQ(1, c.value());
  EXPECT_EQ(2, c.value()); //This test should fail
}



//
// Created by uj on 2020/11/23.
//

#include "gtest/gtest.h"
#include "library.h"

#include <iostream>
using namespace std;

TEST(MySharedLib, sum) {
    hello();
    cout << "1 + 2 = " << sum(1,2) << endl;
    cout << "1 + 2 + 3 = " << sum(1,2,3) << endl;

    EXPECT_EQ(3, sum(1, 2));
    EXPECT_EQ(6, sum(1, 2, 3));
}
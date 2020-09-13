/*
 * AGGControllerTest.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "EncapsulateGlobalReferences/AGGController.h"
#include "EncapsulateGlobalReferences/Global.h"


TEST(AGGControllerTest, testFrameAsGlobalVariable) {
	Frame  frameForAGG230;
	AGGController controller(frameForAGG230);

	controller.suspend_frame();

	ASSERT_EQ(10, frameForAGG230.AGG230_SIZE);
	for (int n = 0; n < AGG230_SIZE; ++n) {
		ASSERT_FALSE(frameForAGG230.AGG230_activeframe[n]);
		ASSERT_FALSE(frameForAGG230.AGG230_suspendedframe[n]);
	}
}

// more TEST
/*
 * When we have more test, we can move some frame[] related methods to Frame Class.
 */




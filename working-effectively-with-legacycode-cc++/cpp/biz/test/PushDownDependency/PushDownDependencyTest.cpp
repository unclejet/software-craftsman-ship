/*
 * PushDownDependencyTest.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "PushDownDependency/WindowsOffMarketTradeValidator.h"

//TEST(PushDownDependencyTest, testIsValidCalledWindowsUIMethods) {
//	Trade trade;
//	TradeValidator* tv = new WindowsOffMarketTradeValidator(trade, false);
//	ASSERT_FALSE(tv->isValid());
//}

class TestingOffMarketTradeValidator : public OffMarketTradeValidator {
public:
	TestingOffMarketTradeValidator(Trade& trade, bool flag) :
		OffMarketTradeValidator(trade, flag) {}
protected:
	virtual void showMessage() {}
};

TEST(PushDownDependencyTest, testIsValid) {
	Trade trade;
	TradeValidator* tv = new TestingOffMarketTradeValidator(trade, false);
	ASSERT_FALSE(tv->isValid());
}

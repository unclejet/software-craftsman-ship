/*
 * OffMarketTradeValidator.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#include "PushDownDependency/OffMarketTradeValidator.h"

bool OffMarketTradeValidator::isValid() {
	if (inRange(trade.getDate())
			&& validDestination(trade.destination)
			&& inHours(trade)) {
		flag = true;
	}
	showMessage(); //dependnecy on Window UI so hard to test.
	return flag;
}

void OffMarketTradeValidator::showMessage() {

}


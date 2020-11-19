/*
 * OffMarketTradeValidator.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#ifndef OFFMARKETTRADEVALIDATOR_H_
#define OFFMARKETTRADEVALIDATOR_H_

#include "TradeValidator.h"
#include "Trade.h"

class OffMarketTradeValidator : public TradeValidator {
public:
	OffMarketTradeValidator(Trade& trade, bool flag)
		: trade(trade), flag(flag) {}
	virtual bool isValid();

protected:
	virtual void showMessage() = 0;
	bool flag;

private:
	Trade& trade;

	bool inRange(int date) {
		return 10 < date && date < 100;
	}

	bool validDestination(int dest) {
		return 100 < dest && dest  < 1000;
	}

	bool inHours(Trade trade) {
		return trade.hasHour();
	}
};



#endif /* OFFMARKETTRADEVALIDATOR_H_ */

/*
 * WindowsOffMarketTradeValidator.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#ifndef WINDOWSOFFMARKETTRADEVALIDATOR_H_
#define WINDOWSOFFMARKETTRADEVALIDATOR_H_

#include "OffMarketTradeValidator.h"

class WindowsOffMarketTradeValidator : public OffMarketTradeValidator {
public:
	WindowsOffMarketTradeValidator(Trade& trade, bool flag) :
		OffMarketTradeValidator(trade, flag) {}
protected:
	virtual void showMessage();
};


#endif /* WINDOWSOFFMARKETTRADEVALIDATOR_H_ */

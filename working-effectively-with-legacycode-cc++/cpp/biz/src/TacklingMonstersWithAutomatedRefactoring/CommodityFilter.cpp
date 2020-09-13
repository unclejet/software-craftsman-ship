/*
 * CommodityFilter.cpp
 *
 *  Created on: Jan 30, 2015
 *      Author: jehan
 */

#include "TacklingMonstersWithAutomatedRefactoring/CommodityFilter.h"

bool CommodityFilter::commoditiesAreReadyForUpdate() {
	return commodities.size() > 0;
}

bool CommodityFilter::singleBrokerCommodity(Commodity& commodity) {
	return commodity.isTwilight() && !commodity.match(broker);
}

void CommodityFilter::updateCommodities() {
	for (vector<Commodity>::iterator it = commodities.begin();
			it < commodities.end(); it++) {
		Commodity commodity = *it;
		if (singleBrokerCommodity(commodity))
			panel.displayCommodity(commodity);
	}
}

void CommodityFilter::update() {
	if (commoditiesAreReadyForUpdate()) {
		panel.clearDisplay();
		updateCommodities();
	}
}



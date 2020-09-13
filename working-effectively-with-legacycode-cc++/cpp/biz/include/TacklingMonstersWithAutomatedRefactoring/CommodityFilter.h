/*
 * CommodityFilter.h
 *
 *  Created on: Jan 30, 2015
 *      Author: jehan
 */

#ifndef COMMODITYFILTER_H_
#define COMMODITYFILTER_H_

#include "CommoditySelectionPanel.h"
#include <vector>
using std::vector;

class CommodityFilter {
public:
	void update();

private:
	CommoditySelectionPanel panel;
	vector<Commodity> commodities;
	int broker = 0;

	bool commoditiesAreReadyForUpdate();
	void updateCommodities();
	bool singleBrokerCommodity(Commodity& commodity);
};

#endif /* COMMODITYFILTER_H_ */

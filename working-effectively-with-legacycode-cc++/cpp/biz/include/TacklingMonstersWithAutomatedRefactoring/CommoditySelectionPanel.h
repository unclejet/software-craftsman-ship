/*
 * CommoditySelectionPanel.h
 *
 *  Created on: Jan 29, 2015
 *      Author: jehan
 */

#ifndef COMMODITYSELECTIONPANEL_H_
#define COMMODITYSELECTIONPANEL_H_

#include "Commodity.h"
#include "ListBox.h"
#include <vector>

using std::vector;

class CommoditySelectionPanel {
public:
	void clearDisplay();
	void displayCommodity(Commodity& commodity);
private:
//	vector<Commodity> commodities;
	ListBox listbox;
//	int broker = 0;

//	bool commoditiesAreReadyForUpdate();

//	void updateCommodities();
//	bool singleBrokerCommodity(Commodity& commodity);

};


#endif /* COMMODITYSELECTIONPANEL_H_ */

/*
 * CommoditySelectionPanel.cpp
 *
 *  Created on: Jan 29, 2015
 *      Author: jehan
 */

#include "TacklingMonstersWithAutomatedRefactoring/CommoditySelectionPanel.h"


void CommoditySelectionPanel::clearDisplay() {
	listbox.clear();
}


void CommoditySelectionPanel::displayCommodity(Commodity& commodity) {
	listbox.add(commodity.getView());
}


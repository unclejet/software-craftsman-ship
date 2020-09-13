/*
 * Commodity.h
 *
 *  Created on: Jan 29, 2015
 *      Author: jehan
 */

#ifndef COMMODITY_H_
#define COMMODITY_H_

#include "View.h"
#include <vector>
#include <iterator>

using std::vector;

class Commodity {
public:
	int size() {
		return 100;
	}

	char* getSource() {
		return "local";
	}

	bool isTwilight() {
		return false;
	}

	bool match(int key) {
		return true;
	}

	View getView() {
		return view;
	}

private:
	View view;
};



#endif /* COMMODITY_H_ */

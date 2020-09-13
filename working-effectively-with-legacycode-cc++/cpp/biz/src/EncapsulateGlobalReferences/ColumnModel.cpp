/*
 * ColumnModel.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#include "EncapsulateGlobalReferences/ColumnModel.h"


#include <iostream>
using namespace std;

void ColumnModel::update() {
	alignRows();
	Option* resizeWidth = optionSource->getOption("ResizeWidth");
	if (resizeWidth->isTrue()) {
		resize();
	} else {
		resizeToDefault();
	}
}

void ColumnModel::alignRows() {
	cout << "ColumnModel::alignRows()\n";
}

void ColumnModel::resize() {
	cout << "ColumnModel::resize()\n";
}

void ColumnModel::resizeToDefault() {
	cout << "ColumnModel::resizeToDefault()\n";
	isResizeToDefault = true;
}

bool ColumnModel::isDefaultResize() {
	return isResizeToDefault;
}


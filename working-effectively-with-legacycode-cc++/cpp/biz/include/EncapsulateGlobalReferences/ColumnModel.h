/*
 * ColumnModel.h
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#ifndef COLUMNMODEL_H_
#define COLUMNMODEL_H_

#include "EncapsulateGlobalReferences/OptionSource.h"

class ColumnModel {
public:
	ColumnModel(OptionSource* os) {
		optionSource = os;
	}
	void update();
	bool isDefaultResize();
private:
	void alignRows();
	void resize();
	void resizeToDefault();
	bool isResizeToDefault = false;
	OptionSource* optionSource;

};



#endif /* COLUMNMODEL_H_ */

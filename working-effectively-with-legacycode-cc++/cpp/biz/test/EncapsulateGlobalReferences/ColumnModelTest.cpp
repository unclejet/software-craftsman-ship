/*
 * ColumnModelTest.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "EncapsulateGlobalReferences/ColumnModel.h"
#include "EncapsulateGlobalReferences/ProductionOptionSource.h"

class TestingOption : public Option {
public:
	bool isTrue() {
		return true;
	}
};

class TestingOptionSource : public OptionSource {
public:
	~TestingOptionSource() {
		delete option;
	}

	Option* getOption(const std::string&) {
		return option;
	}

	void setOption(const std::string&, Option*) {

	}
private:
	Option* option = new TestingOption;
};

TEST(ColumnModelTest, ColumnModelUpdate) {
	OptionSource* os = new TestingOptionSource;
	ColumnModel model(os);
	model.update();

	ASSERT_FALSE(model.isDefaultResize());
}

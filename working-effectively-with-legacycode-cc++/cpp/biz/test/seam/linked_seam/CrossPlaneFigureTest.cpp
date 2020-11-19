/*
 * CrossPlaneFigureTest.cpp
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */

#include "gtest/gtest.h"
#include "seam/linked_seam/CrossPlaneFigure.h"

TEST(CrossPlaneFigureTest, rerender) {
	CrossPlaneFigure figure;
	figure.rerender();

	ASSERT_EQ(5, actions.size());

	GraphicsAction ga = actions.front();
	ASSERT_EQ(LABEL_DRAW_TEXT, ga.getType());
	ASSERT_EQ(1, ga.getFirstX());
	ASSERT_EQ(2, ga.getFirstY());
	ASSERT_EQ(7, ga.getSecondX());
	ASSERT_EQ(6, ga.getSecondY());
	for (int i = 0; i < 4; i++)
		actions.pop();

	ga = actions.front();
	ASSERT_EQ(LABEL_DRAW_LINE, ga.getType());
	ASSERT_EQ(1, ga.getFirstX());
	ASSERT_EQ(5, ga.getFirstY());
	ASSERT_EQ(7, ga.getSecondX());
	ASSERT_EQ(5, ga.getSecondY());
}



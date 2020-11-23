/*
 * Graphics.cpp
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */


#include "Graphics.h"

#include <iostream>
#include <queue>

std::queue<GraphicsAction> actions;


void drawText(int x, int y, char *text, int textLength) {
	std::cout << "Fake: Graphics drawText is called\n";
	actions.push(GraphicsAction(LABEL_DRAW_TEXT, x, y, x + strlen(text), textLength));
}

void drawLine(int firstX, int firstY, int secondX, int secondY) {
	std::cout << "Fake: Graphics drawLine is called\n";
	actions.push(GraphicsAction(LABEL_DRAW_LINE, firstX, firstY, secondX, secondY));
}



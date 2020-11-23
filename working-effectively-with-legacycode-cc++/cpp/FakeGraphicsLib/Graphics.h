/*
 * Graphics.h
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */

#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include "GraphicsAction.h"

#include <queue>
#include "string.h"

extern std::queue<GraphicsAction> actions;

void drawText(int x, int y, char *text, int textLength);
void drawLine(int firstX, int firstY, int secondX, int secondY);



#endif /* GRAPHICS_H_ */

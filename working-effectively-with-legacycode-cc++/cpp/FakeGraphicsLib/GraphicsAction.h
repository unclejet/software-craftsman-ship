/*
 * GraphicsAction.h
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */

#ifndef GRAPHICSACTION_H_
#define GRAPHICSACTION_H_


#include <queue>

const int LABEL_DRAW_LINE = 0;
const int LABEL_DRAW_TEXT = 1;



class GraphicsAction {
private:
	int firstX;
	int firstY;
	int secondX;
	int secondY;

	int type;

public:
	GraphicsAction(int type, int firstX, int firstY, int secondX, int secondY) :
		type(type), firstX(firstX), firstY(firstY), secondX(secondX), secondY(secondY) {}

	int getFirstX() {
		return firstX;
	}

	int getFirstY() {
		return firstY;
	}

	int getSecondX() {
		return secondX;
	}

	int getSecondY() {
		return secondY;
	}

	int getType() {
		return type;
	}
};



#endif /* GRAPHICSACTION_H_ */

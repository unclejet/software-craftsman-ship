/*
 * CrossPlaneFigure.h
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */

#ifndef CROSSPLANEFIGURE_H_
#define CROSSPLANEFIGURE_H_

#include "Graphics.h"

class CrossPlaneFigure {
private:
	int m_nX = 1;
	int m_nY = 2;
	char* m_pchLabel = "simple";

	int getClipLen();
	int getDropLen();

	bool m_bShadowBox;

public:
	void rerender();
};



#endif /* CROSSPLANEFIGURE_H_ */

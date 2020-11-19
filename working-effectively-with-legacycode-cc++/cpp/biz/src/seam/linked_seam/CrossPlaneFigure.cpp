/*
 * CrossPlaneFigure.cpp
 *
 *  Created on: Nov 28, 2014
 *      Author: jehan
 */

#include "seam/linked_seam/CrossPlaneFigure.h"

#include <iostream>

void CrossPlaneFigure::rerender()
{
    // draw the label
    drawText(m_nX, m_nY, m_pchLabel, getClipLen());
    drawLine(m_nX, m_nY, m_nX + getClipLen(), m_nY);
    drawLine(m_nX, m_nY, m_nX, m_nY + getDropLen());
    if (!m_bShadowBox) {
        drawLine(m_nX + getClipLen(), m_nY,
                    m_nX + getClipLen(), m_nY + getDropLen());
        drawLine(m_nX, m_nY + getDropLen(),
                    m_nX + getClipLen(), m_nY + getDropLen());
    }

    // draw the figure
//    for (int n = 0; n < edges.size(); n++) {
       // ...
//    }

    //...
}

int CrossPlaneFigure::getClipLen() {
	return strlen(m_pchLabel);
}

int CrossPlaneFigure::getDropLen() {
	return m_nX + m_nY;
}



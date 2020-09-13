/*
 * AGGController.h
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#ifndef AGGCONTROLLER_H_
#define AGGCONTROLLER_H_

#include "Frame.h"

class AGGController {
public:
	AGGController(Frame frame) : frameForAGG230(frame) {}
	void suspend_frame();
	void frame_copy(bool[], bool[]);
	void clear(bool[]);
	void flush_frame_buffers();

private:
	Frame frameForAGG230;
};



#endif /* AGGCONTROLLER_H_ */

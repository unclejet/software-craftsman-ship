/*
 * AGGController.cpp
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#include "EncapsulateGlobalReferences/AGGController.h"

#include <iostream>
using namespace std;

void AGGController::frame_copy(bool from[], bool to[]) {
	cout << "frame_copy(from, to)" << endl;
}

void AGGController::clear(bool frame[]) {
	cout << "clear(frame[])" << endl;
}

void AGGController::flush_frame_buffers() {
	for (int n = 0; n < frameForAGG230.AGG230_SIZE; ++n) {
		frameForAGG230.AGG230_activeframe[n] = false;
		frameForAGG230.AGG230_suspendedframe[n] = false;
	}
}

void AGGController::suspend_frame() {
	frame_copy(frameForAGG230.AGG230_suspendedframe, frameForAGG230.AGG230_activeframe);
	clear(frameForAGG230.AGG230_activeframe);
	flush_frame_buffers();
}

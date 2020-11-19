/*
 * Frame.h
 *
 *  Created on: Feb 25, 2015
 *      Author: jehan
 */

#ifndef FRAME_H_
#define FRAME_H_

class Frame {
public:
    enum { AGG230_SIZE = 10 };
    bool AGG230_activeframe[AGG230_SIZE];
    bool AGG230_suspendedframe[AGG230_SIZE];
};



#endif /* FRAME_H_ */

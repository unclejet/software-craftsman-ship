/*
 * CSocket.h
 *
 *  Created on: Mar 5, 2015
 *      Author: jehan
 */

#ifndef CSOCKET_H_
#define CSOCKET_H_

#include <iostream>

class CSocket {
public:
	void receive(int buffer, int bufferSize) {
		//...
		std::cout << "CSocket::receive called\n";
	}
};



#endif /* CSOCKET_H_ */

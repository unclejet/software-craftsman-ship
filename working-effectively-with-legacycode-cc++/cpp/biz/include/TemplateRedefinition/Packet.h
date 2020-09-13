/*
 * Packet.h
 *
 *  Created on: Mar 5, 2015
 *      Author: jehan
 */

#ifndef PACKET_H_
#define PACKET_H_

#include <iostream>

class Packet {
public:
	void mark() {
		//...
		std::cout << "Packet::mark called\n";
	}

	void append(int buffer, int bufferSize) {
		//...
		std::cout << "Packet::append called \n";
	}

	void pack() {
		//...
		std::cout << "Packet::pack called\n";
	}

	void finalize() {
		//...
		std::cout << "Packet::finalize called\n";
	}
};



#endif /* PACKET_H_ */

/*
 * AsyncReceptionPort.h
 *
 *  Created on: Mar 5, 2015
 *      Author: jehan
 */

#ifndef ASYNCRECEPTIONPORT_H_
#define ASYNCRECEPTIONPORT_H_

#include "CSocket.h"
#include "Packet.h"

//class AsyncReceptionPort {
//private:
//    CSocket m_socket;
//    Packet m_packet;
//    int m_segmentSize;
//    int m_bufferMax;
//    int m_remainingSize;
//    int m_receiveBuffer;
//    //...
//
//public:
//    AsyncReceptionPort();
//    void run();
//    //...
//};

template<typename SOCKET> class AsyncReceptionPortImpl {
private:
	SOCKET m_socket;
	Packet m_packet;
	int m_segmentSize;
	int m_bufferMax;
	int m_remainingSize;
	int m_receiveBuffer;
	//...

public:
	AsyncReceptionPortImpl() {
		m_bufferMax = 1000;
		m_segmentSize = 1;
	}
	void run();
	//...
};

template<typename SOCKET>
void AsyncReceptionPortImpl<SOCKET>::run() {
	for (int n = 0; n < m_segmentSize; ++n) {
		int bufferSize = m_bufferMax;
		if (n = m_segmentSize - 1)
			bufferSize = m_remainingSize;
		m_socket.receive(m_receiveBuffer, bufferSize);
		m_packet.mark();
		m_packet.append(m_receiveBuffer, bufferSize);
		m_packet.pack();
	}
	m_packet.finalize();
}

typedef AsyncReceptionPortImpl<CSocket> AsyncReceptionPort;

#endif /* ASYNCRECEPTIONPORT_H_ */

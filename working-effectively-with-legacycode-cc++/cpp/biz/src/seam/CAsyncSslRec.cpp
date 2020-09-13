/*
 * CAsyncSslRec.cpp
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#include "seam/CAsyncSslRec.h"
#include <iostream>
using namespace std;


bool CAsyncSslRec::Init() {
	if (m_bSslInitialized) {
		return true;
	}
	m_smutex.Unlock();
	m_nSslRefCount++;

	m_bSslInitialized = true;

	FreeLibrary(m_hSslDll1);
	m_hSslDll1 = 0;
	FreeLibrary(m_hSslDll2);
	m_hSslDll2 = 0;

	if (!m_bFailureSent) {
		m_bFailureSent = true;
		PostReceiveError(SOCKETCALLBACK, SSL_FAILURE);
	}

	CreateLibrary(m_hSslDll1, "syncesel1.dll");
	CreateLibrary(m_hSslDll2, "syncesel2.dll");

	m_hSslDll1->Init();
	m_hSslDll2->Init();

	return true;
}

void CAsyncSslRec::PostReceiveError(UINT type, UINT errorcode) {
	// logic: communicate with another subsystem.
	//...
	cout << "CAsyncSslRec::PostReceiveError() is called" << endl;
}


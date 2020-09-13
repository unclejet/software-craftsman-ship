/*
 * CAsyncSslRec.h
 *
 *  Created on: Nov 15, 2014
 *      Author: jehan
 */

#ifndef CASYNCSSLREC_H_
#define CASYNCSSLREC_H_

#include "SmuTex.h"
#include "HSSLD.h"

#include <string>

typedef unsigned int UINT;

class CAsyncSslRec {
public:
	bool Init();

private:
	UINT SOCKETCALLBACK = 0;
	UINT SSL_FAILURE = 1;

	bool m_bSslInitialized = false;
	bool m_bFailureSent = false;

	SmuTex m_smutex;

	int m_nSslRefCount;
	HSSLD* m_hSslDll1;
	HSSLD* m_hSslDll2;

	void FreeLibrary(HSSLD*) {}
	void CreateLibrary(HSSLD*, std::string) {}
	virtual void PostReceiveError(UINT type, UINT errorcode);
};



#endif /* CASYNCSSLREC_H_ */

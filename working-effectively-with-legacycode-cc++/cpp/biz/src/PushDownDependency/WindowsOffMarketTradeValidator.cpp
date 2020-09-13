/*
 * WindowsOffMarketTradeValidator.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#include "PushDownDependency/WindowsOffMarketTradeValidator.h"
#include "PushDownDependency/windows/Windows.h"
#include "PushDownDependency/windows/SubmitDialog.h"

void WindowsOffMarketTradeValidator::showMessage() {
	int status = AfxMessageBox(makeMessage(), MB_ABORTRETRYIGNORE);
		if (status == IDRETRY) {
			SubmitDialog dlg("Press okay if this is a valid trade");
			dlg.DoModal();
			if (dlg.wasSubmitted()) {
	//			g_dispatcher.undoLastSubmission();
				flag = true;
			}
		} else if (status == IDABORT) {
			flag = false;
		}
}



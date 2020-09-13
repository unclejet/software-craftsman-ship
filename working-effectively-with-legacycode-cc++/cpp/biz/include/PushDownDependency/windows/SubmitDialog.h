/*
 * SubmitDialog.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jehan
 */

#ifndef SUBMITDIALOG_H_
#define SUBMITDIALOG_H_

#include <iostream>

class SubmitDialog {
public:
	SubmitDialog(char* msg) {
		std::cout << "SubmitDialog()::" << msg << std::endl;
	}

	void DoModal() {
		std::cout << "SubmitDialog::DoModal()\n";
	}

	bool wasSubmitted() {
		return true;
	}

};



#endif /* SUBMITDIALOG_H_ */

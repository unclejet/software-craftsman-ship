/*
 * QuarterlyReportGenerator.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: jehan
 */

#include "SproutClass/QuarterlyReportGenerator.h"
#include "SproutClass/QuarterlyReportTableHeaderProducer.h"
#include <stdio.h>

std::string QuarterlyReportGenerator::generate() {
	std::vector<Result> results = database->queryResults(beginDate, endDate);
	std::string pageText;

	pageText += "<html><head><title>"
			"Quarterly Report"
			"</title></head><body><table>";
	if (results.size() != 0) {
		QuarterlyReportTableHeaderProducer headerMaker;
		pageText += headerMaker.makeTableHeader();
		for (std::vector<Result>::iterator it = results.begin();
				it != results.end(); ++it) {
			pageText += "<tr>";
			pageText += "<td>" + it->department + "</td>";
			pageText += "<td>" + it->manager + "</td>";
			char buffer[128];
			sprintf(buffer, "<td>$%d</td>", it->netProfit / 100);
			pageText += std::string(buffer);
			sprintf(buffer, "<td>$%d</td>", it->operatingExpense / 100);
			pageText += std::string(buffer);
			pageText += "</tr>";
		}
	} else {
		pageText += "No results for this period";
	}
	pageText += "</table>";
	pageText += "</body>";
	pageText += "</html>";

	return pageText;
}


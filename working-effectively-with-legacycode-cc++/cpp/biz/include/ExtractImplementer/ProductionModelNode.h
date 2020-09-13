/*
 * ProductionModelNode.h
 *
 *  Created on: Jan 13, 2015
 *      Author: jehan
 */

#ifndef PRODUCTIONMODELNODE_H_
#define PRODUCTIONMODELNODE_H_

#include "ModelNode.h"
#include <list>
using std::list;

class ProductionModelNode : public ModelNode {
public:
	virtual void addExteriorNode(ModelNode* newNode);
	virtual void addInternalNode(ModelNode* newNode);
	virtual void colorize();

private:
	list<ModelNode*> m_interiorNodes;
	list<ModelNode*> m_exteriorNodes;
	double m_weight;
	void createSpanningLinks();
};



#endif /* PRODUCTIONMODELNODE_H_ */

/*
 * ModelNode.h
 *
 *  Created on: Jan 13, 2015
 *      Author: jehan
 */

#ifndef MODELNODE_H_
#define MODELNODE_H_



class ModelNode {
public:
	virtual ~ModelNode() = 0;
	virtual void addExteriorNode(ModelNode* newNode) = 0;
	virtual void addInternalNode(ModelNode* newNode) = 0;
	virtual void colorize() = 0;
};



#endif /* MODELNODE_H_ */

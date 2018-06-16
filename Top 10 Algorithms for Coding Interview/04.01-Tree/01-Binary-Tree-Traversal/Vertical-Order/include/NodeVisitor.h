#ifndef NODE_VISITOR_H
#define NODE_VISITOR_H

#include "BinaryNode.h"

class NodeVisitor{ 
public:
	virtual void visit(BinaryNode* node) = 0;
	virtual void beforeVisitingLeftNode(BinaryNode* node){};
	virtual void afterVisitingLeftNode(BinaryNode* node){};
	virtual void beforeVisitingRightNode(BinaryNode* node){};
	virtual void afterVisitingRightNode(BinaryNode* node){};
}; 

#endif

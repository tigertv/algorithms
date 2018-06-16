#ifndef IN_ORDER_BINARY_TREE_TRAVERSAL_H
#define IN_ORDER_BINARY_TREE_TRAVERSAL_H

#include "NodeVisitor.h"
#include "BinaryTreeTraversal.h"

class InOrderBTTraversal : public BinaryTreeTraversal { 
public:
	InOrderBTTraversal(NodeVisitor* visitor);
	void traverse(BinaryNode* node);
}; 

#endif

#ifndef PRE_ORDER_BINARY_TREE_TRAVERSAL_H
#define PRE_ORDER_BINARY_TREE_TRAVERSAL_H

#include "NodeVisitor.h"
#include "BinaryTreeTraversal.h"

class PreOrderBTTraversal : public BinaryTreeTraversal { 
public:
	PreOrderBTTraversal(NodeVisitor* visitor);
	void traverse(BinaryNode* node);
}; 

#endif

#ifndef POST_ORDER_BINARY_TREE_TRAVERSAL_H
#define POST_ORDER_BINARY_TREE_TRAVERSAL_H

#include "NodeVisitor.h"
#include "BinaryTreeTraversal.h"

class PostOrderBTTraversal : public BinaryTreeTraversal { 
public:
	PostOrderBTTraversal(NodeVisitor* visitor);
	void traverse(BinaryNode* node);
}; 

#endif

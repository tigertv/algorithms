#ifndef BINARY_TREE_TRAVERSAL_H
#define BINARY_TREE_TRAVERSAL_H

#include "NodeVisitor.h"
#include "BinaryNode.h"

class BinaryTreeTraversal { 
protected:
	NodeVisitor* visitor = 0;
public:
	BinaryTreeTraversal(NodeVisitor* visitor);
	virtual void traverse(BinaryNode* node) = 0;
}; 

#endif

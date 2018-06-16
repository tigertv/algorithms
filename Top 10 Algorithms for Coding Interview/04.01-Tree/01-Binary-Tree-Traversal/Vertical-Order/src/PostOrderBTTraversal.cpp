#include "PostOrderBTTraversal.h"

PostOrderBTTraversal::PostOrderBTTraversal(NodeVisitor * visitor) : BinaryTreeTraversal(visitor) {

}

void PostOrderBTTraversal::traverse(BinaryNode* node) {
	if (!node) return;

	this->visitor->beforeVisitingLeftNode(node);
	this->traverse(node->leftNode);
	this->visitor->afterVisitingLeftNode(node);

	this->visitor->beforeVisitingRightNode(node);
	this->traverse(node->rightNode);
	this->visitor->afterVisitingRightNode(node);

	this->visitor->visit(node);
}

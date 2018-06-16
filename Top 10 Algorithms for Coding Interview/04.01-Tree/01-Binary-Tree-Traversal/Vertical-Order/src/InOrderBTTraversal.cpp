#include "InOrderBTTraversal.h"

InOrderBTTraversal::InOrderBTTraversal(NodeVisitor * visitor) : BinaryTreeTraversal(visitor) {

}

void InOrderBTTraversal::traverse(BinaryNode* node) {
	if (!node) return;

	this->visitor->beforeVisitingLeftNode(node);
	this->traverse(node->leftNode);
	this->visitor->afterVisitingLeftNode(node);

	this->visitor->visit(node);

	this->visitor->beforeVisitingRightNode(node);
	this->traverse(node->rightNode);
	this->visitor->afterVisitingRightNode(node);
}

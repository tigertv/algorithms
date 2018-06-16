#include "PreOrderBTTraversal.h"

PreOrderBTTraversal::PreOrderBTTraversal(NodeVisitor * visitor) : BinaryTreeTraversal(visitor) {

}

void PreOrderBTTraversal::traverse(BinaryNode* node) {
	if (!node) return;

	this->visitor->visit(node);

	this->visitor->beforeVisitingLeftNode(node);
	this->traverse(node->leftNode);
	this->visitor->afterVisitingLeftNode(node);

	this->visitor->beforeVisitingRightNode(node);
	this->traverse(node->rightNode);
	this->visitor->afterVisitingRightNode(node);
}

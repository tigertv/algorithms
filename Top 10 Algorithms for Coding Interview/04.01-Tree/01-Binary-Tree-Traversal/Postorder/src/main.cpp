#include <iostream>
#include <vector>
#include <stack>
#include "treeNode.h"

int main() { 
	TreeNode root(5);
	TreeNode leftNode(2);
	TreeNode rightNode(3);
	TreeNode leftLeftNode(1);
	TreeNode leftRightNode(4);

	root.leftNode = &leftNode;
	root.rightNode = &rightNode;

	leftNode.leftNode = &leftLeftNode;
	leftNode.rightNode = &leftRightNode;

	std::vector<int> returnList;

	std::stack<TreeNode*> *stack = new std::stack<TreeNode*>();
	stack->push(&root);

	TreeNode *prev = NULL;

	while(!stack->empty()) {
		TreeNode *n = stack->top();
		
		if (!prev || prev->leftNode == n || prev->rightNode == n) {
			if (n->leftNode) {
				stack->push(n->leftNode);
			} else if (n->rightNode) {
				stack->push(n->rightNode);
			} else {
				stack->pop();
				returnList.push_back(n->val);
			}
		} else if (n->leftNode == prev) {
			if (n->rightNode) {
				stack->push(n->rightNode);
			} else { 
				stack->pop();
				returnList.push_back(n->val);
			}
		} else if (n->rightNode == prev) {
			stack->pop();
			returnList.push_back(n->val);
		}

		prev = n;
	}

	for (unsigned int i=0;i<returnList.size();i++) {
		std::cout << returnList[i] << " ";
	}
	std::cout << std::endl;

	delete stack;

	return 0;
} 

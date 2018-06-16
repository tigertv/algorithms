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
	TreeNode *n = &root;

	while(!stack->empty() || n) {
		
		if (n) {
			stack->push(n);
			n = n->leftNode;
		} else {
			TreeNode *t = stack->top();
			stack->pop();
			returnList.push_back(t->val);
			n = t->rightNode;
		}

	}

	for (unsigned int i=0;i<returnList.size();i++) {
		std::cout << returnList[i] << " ";
	}
	std::cout << std::endl;

	delete stack;

	return 0;
} 

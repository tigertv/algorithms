#include <iostream>
#include <vector>
#include "treeNode.h"

int main() { 
	TreeNode root(3);
	TreeNode leftNode(9);
	TreeNode rightNode(20);
	TreeNode rightLeftNode(15);
	TreeNode rightRightNode(7);

	root.leftNode = &leftNode;
	root.rightNode = &rightNode;

	rightNode.leftNode = &rightLeftNode;
	rightNode.rightNode = &rightRightNode;

	std::vector<std::vector<int>*> *al = new std::vector<std::vector<int>*>();

	std::vector<int> *nodeValues = new std::vector<int>();
	std::vector<TreeNode*> *next = new std::vector<TreeNode*>();
	std::vector<TreeNode*> *current = new std::vector<TreeNode*>();

	current->push_back(&root);

	while(!current->empty()) {
		TreeNode *node = current->front();
		current->erase(current->begin());

		if(node->leftNode) {
			next->push_back(node->leftNode);
		}
		if (node->rightNode) {
			next->push_back(node->rightNode);
		}

		nodeValues->push_back(node->val);
		if(current->empty()) {
			current = next;
			next = new std::vector<TreeNode*>();
			al->push_back(nodeValues);
			nodeValues = new std::vector<int>();
		}
	}

	for (unsigned int i=0;i<al->size();i++) {
		std::vector <int> *b  =  al->at(i);
		std::cout << "[ ";
		for(unsigned int j=0;j<b->size();j++) {
			std::cout << b->at(j) << " ";
			//std::cout << b[j] << " ";
		}
		std::cout << "] ";
	}
	std::cout << std::endl;

	return 0;
} 

#include <iostream>
#include <vector>
#include "treeNode.h"

int main() { 
	using namespace std;
	TreeNode root(3);
	TreeNode leftNode(9);
	TreeNode rightNode(20);
	TreeNode rightLeftNode(15);
	TreeNode rightRightNode(7);

	root.leftNode = &leftNode;
	root.rightNode = &rightNode;

	rightNode.leftNode = &rightLeftNode;
	rightNode.rightNode = &rightRightNode;

	vector<vector<int>*> *al = new vector<vector<int>*>();

	vector<int> *nodeValues = new vector<int>();
	vector<TreeNode*> *next = new vector<TreeNode*>();
	vector<TreeNode*> *current = new vector<TreeNode*>();

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
			next = new vector<TreeNode*>();
			al->push_back(nodeValues);
			nodeValues = new vector<int>();
		}
	}

	// reverse
	vector<vector<int>*> *rev = new vector<vector<int>*>();
	for (int i=al->size()-1;i>=0;--i) {
		cout << "i=" << i << endl;
		rev->push_back(al->at(i));
	}

	for (unsigned int i=0;i<rev->size();i++) {
		vector <int> *b  =  rev->at(i);
		cout << "[ ";
		for(unsigned int j=0;j<b->size();j++) {
			cout << b->at(j) << " ";
			//std::cout << b[j] << " ";
		}
		cout << "] ";
	}
	cout << endl;

	return 0;
} 

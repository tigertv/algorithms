#include <iostream>
#include "LevelOrderVisitor.h"

LevelOrderVisitor::LevelOrderVisitor() {

}

void LevelOrderVisitor::visit(BinaryNode* node) {
	this->m[this->level].push_back(node->val);
}

void LevelOrderVisitor::beforeVisitingLeftNode(BinaryNode* node) {
	this->level--;
}

void LevelOrderVisitor::afterVisitingLeftNode(BinaryNode* node) {
	this->level++;
}

void LevelOrderVisitor::beforeVisitingRightNode(BinaryNode* node) {
	this->level++;
}

void LevelOrderVisitor::afterVisitingRightNode(BinaryNode* node) {
	this->level--;
}

void LevelOrderVisitor::printByLevel() {
	using namespace std;
	map< int,vector<int> > :: iterator it;
	for (it=m.begin(); it!=m.end(); it++)
	{
		for (int i=0; i<it->second.size(); ++i)
		cout << it->second[i] << " ";
		cout << endl;
	}
}

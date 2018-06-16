#include "TreeNode.h"

TreeNode::TreeNode(int left, int right) {
	this->start = left;
	this->end = right;
	this->sum = 0;
}

TreeNode::TreeNode(int left, int right, int sum) {
	this->start = left;
	this->end = right;
	this->sum = sum;
}

#include "NumArray.h"

NumArray::NumArray(std::vector<int> *nums) {
	if (!nums || nums->size()== 0) return;
	root = buildTree(nums, 0, nums->size()-1);
}

void NumArray::update(int i, int val) {
	updateHelper(root, i, val);
}

void NumArray::updateHelper(TreeNode *root, int i, int val) {
	if (!root) return;

	int middle = root->start + (root->end - root->start)/2;

	if (i<=middle) {
		updateHelper(root->leftChild, i, val);
	} else {
		updateHelper(root->rightChild, i, val);
	}

	if (root->start == root->end && root->start == i) {
		root->sum = val;
		return;
	}

	root->sum = root->leftChild->sum + root->rightChild->sum;
}

int NumArray::sumRange(int i, int j) {
	return sumRangeHelper(root, i, j);
}

int NumArray::sumRangeHelper(TreeNode *root, int i, int j) {
	if(!root || j<root->start || i > root->end || i>j ) return 0;

	if(i<=root->start && j>=root->end) return root->sum;

	int middle = root->start + (root->end - root->start)/2;
	int result = sumRangeHelper(root->leftChild, i, std::min(middle, j))+
		sumRangeHelper(root->rightChild, std::max(middle+1,i), j);
	return result;
}

TreeNode* NumArray::buildTree(std::vector<int> *nums, int i, int j) {
	if (!nums || nums->size() == 0 || i>j) return nullptr;

	TreeNode *current;

	if (i == j) {
		current = new TreeNode(i, j, nums->at(i));
		return current;
	}

	current = new TreeNode(i, j);
	int middle = i + (j-i)/2;
	current->leftChild = buildTree(nums, i, middle);
	current->rightChild = buildTree(nums, middle+1, j);
	current->sum = current->leftChild->sum + current->rightChild->sum;
	return current;
}

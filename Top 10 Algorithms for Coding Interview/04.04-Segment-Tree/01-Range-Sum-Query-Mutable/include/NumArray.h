#ifndef NUM_ARRAY_H
#define NUM_ARRAY_H

#include <vector>
#include "TreeNode.h"

class NumArray { 
	TreeNode *root = nullptr;
public:
	NumArray(std::vector<int> *nums);
	void update(int i, int val);
	void updateHelper(TreeNode *root, int i, int val);
	int sumRange(int i, int j);
	int sumRangeHelper(TreeNode *root, int i, int j);
	TreeNode* buildTree(std::vector<int> *nums, int i, int j);
}; 

#endif

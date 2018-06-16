#ifndef TREE_NODE_H
#define TREE_NODE_H

class TreeNode { 
public:
	TreeNode(int val);
	int val;
	TreeNode* leftNode = 0;
	TreeNode* rightNode = 0;
}; 

#endif

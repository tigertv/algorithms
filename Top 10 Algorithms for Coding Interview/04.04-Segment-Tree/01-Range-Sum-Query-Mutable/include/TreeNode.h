#ifndef TREE_NODE_H
#define TREE_NODE_H

class TreeNode { 
public:
	int start;
	int end;
	int sum;
	TreeNode *leftChild;
	TreeNode *rightChild;
	TreeNode(int left, int right);
	TreeNode(int left, int right, int sum);
}; 

#endif

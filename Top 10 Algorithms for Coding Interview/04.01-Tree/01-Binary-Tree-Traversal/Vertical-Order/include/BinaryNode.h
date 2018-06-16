#ifndef BINARY_NODE_H
#define BINARY_NODE_H

class BinaryNode { 
public:
	BinaryNode(int val);
	int val;
	BinaryNode* leftNode = 0;
	BinaryNode* rightNode = 0;
}; 

#endif

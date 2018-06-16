# Task

Preorder binary tree traversal is a classic interview problem about trees. 
The key to solve this problem is to understand the following:

1. What is preorder? (parent node is processed before its children, root - leftChild - rightChild)
2. Use stack from core

The key is using a stack to store left and right children, and push right child first so that it is processed after the left child.

#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include "BinaryNode.h"
#include "BinaryTreeTraversal.h"
#include "PreOrderBTTraversal.h"
#include "InOrderBTTraversal.h"
#include "PostOrderBTTraversal.h"
#include "NodeVisitor.h"
#include "DisplayVisitor.h"
#include "LevelOrderVisitor.h"

int main() { 
	using namespace std;

	BinaryNode *root = new BinaryNode(5);
	root->leftNode = new BinaryNode(2);
	root->rightNode = new BinaryNode(3);

	BinaryNode *current = root->leftNode;
	current->leftNode = new BinaryNode(1);
	current->rightNode = new BinaryNode(4);

	cout << "PreOrder:" << endl;

	NodeVisitor *visitor = new DisplayVisitor();
	BinaryTreeTraversal *traversal = new PreOrderBTTraversal(visitor);
	traversal->traverse(root);

	cout << endl << endl;
	cout << "InOrder:" << endl;

	traversal = new InOrderBTTraversal(visitor);
	traversal->traverse(root);

	cout << endl << endl;
	cout << "PostOrder:" << endl;

	traversal = new PostOrderBTTraversal(visitor);
	traversal->traverse(root);

	cout << endl << endl;
	cout << "LevelOrder:" << endl;

	visitor = new LevelOrderVisitor();

	traversal = new PreOrderBTTraversal(visitor);
	//traversal = new InOrderBTTraversal(visitor);
	//traversal = new PostOrderBTTraversal(visitor);

	traversal->traverse(root);
	cout << endl;

	LevelOrderVisitor *k = (LevelOrderVisitor*)visitor;
	k->printByLevel();

	cout << endl;

	return 0;
} 

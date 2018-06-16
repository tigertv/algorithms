#ifndef LEVEL_ORDER_VISITOR_H 
#define LEVEL_ORDER_VISITOR_H 

#include "NodeVisitor.h"
#include <map>
#include <vector>

class LevelOrderVisitor : public NodeVisitor { 
	int level = 0;
	std::map < int,std::vector<int> > m;
public:
	LevelOrderVisitor();
	void visit(BinaryNode* node);
	void beforeVisitingLeftNode(BinaryNode* node);
	void afterVisitingLeftNode(BinaryNode* node);
	void beforeVisitingRightNode(BinaryNode* node);
	void afterVisitingRightNode(BinaryNode* node);
	void printByLevel();
}; 

#endif

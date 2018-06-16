#include "UndirectedGraphNode.h"

UndirectedGraphNode::UndirectedGraphNode(int label) {
	this->label = label;
	this->neighbors = new std::vector<UndirectedGraphNode*>();
}


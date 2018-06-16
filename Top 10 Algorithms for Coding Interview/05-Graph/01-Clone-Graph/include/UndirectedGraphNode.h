#ifndef UNDIRECTED_GRAPH_NODE_H 
#define UNDIRECTED_GRAPH_NODE_H 

#include <vector>

class UndirectedGraphNode { 
public:
	int label;
	std::vector<UndirectedGraphNode*> *neighbors;
	UndirectedGraphNode(int label);
}; 

#endif

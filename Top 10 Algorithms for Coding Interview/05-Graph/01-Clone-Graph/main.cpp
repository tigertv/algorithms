#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include "UndirectedGraphNode.h"

UndirectedGraphNode* cloneUndirectedGraphNode(UndirectedGraphNode* node) {
	if(!node) return nullptr;

	std::queue<UndirectedGraphNode*> *queue = new std::queue<UndirectedGraphNode*>();
	UndirectedGraphNode *newHead = new UndirectedGraphNode(node->label);
	std::map<UndirectedGraphNode*, UndirectedGraphNode*> *map = new std::map<UndirectedGraphNode*, UndirectedGraphNode*>();
	queue->push(node);
	map->insert(std::pair<UndirectedGraphNode*, UndirectedGraphNode*>(node, newHead));

	while(!queue->empty()){
		UndirectedGraphNode *curr = queue->back();
		queue->pop();
		std::vector<UndirectedGraphNode*> *currNeighbors = curr->neighbors; 

		for (std::vector<UndirectedGraphNode*>::iterator aNeighbor = currNeighbors->begin(); aNeighbor != currNeighbors->end(); ++aNeighbor) {
			if(map->find(*aNeighbor) != map->end()){
				UndirectedGraphNode *copy = new UndirectedGraphNode((*aNeighbor)->label);
				map->insert(std::pair<UndirectedGraphNode*, UndirectedGraphNode*>(*aNeighbor, copy));
				map->at(curr)->neighbors->push_back(copy);
				queue->push(*aNeighbor);
			}else{
				map->at(curr)->neighbors->push_back(map->at(*aNeighbor));
			}
		}
	}

	return newHead;
}

int main() { 
	using namespace std;

	UndirectedGraphNode node(2);
	UndirectedGraphNode *pNode = cloneUndirectedGraphNode(&node);

	return 0;
} 

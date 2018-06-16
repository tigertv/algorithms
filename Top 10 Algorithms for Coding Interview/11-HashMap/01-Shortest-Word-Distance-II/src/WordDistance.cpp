#include "WordDistance.h"
#include <utility>
#include <limits>
#include <algorithm>

WordDistance::WordDistance(std::vector<std::string> *words){
	this->aMap = new std::unordered_map<std::string, std::vector<int>>();
	std::vector<int> *v = new std::vector<int>();
	//std::vector<int> v1;// = new std::vector<int>();
	//aMap->at(0);

	for(int i=0; i<words->size();i++) {
		if(this->aMap->find(words->at(i))!=this->aMap->end()) {
			aMap->at(words->at(i)).push_back(i);
		} else {
			std::vector<int> *vlist = new std::vector<int>();
			vlist->push_back(i);
			aMap->insert(std::pair<std::string, std::vector<int> >(words->at(i), *vlist));
		}
	}
}

int WordDistance::shortest(std::string word1, std::string word2) {
	std::vector<int> l1 = aMap->at(word1);
	std::vector<int> l2 = aMap->at(word2);

	int result = std::numeric_limits<int>::max();
	int i=0;
	int j=0;

	while(i < l1.size() && j < l2.size() ) {
		result = std::min(result, l1.at(i) - l2.at(j));
		if (l1.at(i) < l2.at(j)) {
			i++;
		} else {
			j++;
		}

	}

	return result;
}

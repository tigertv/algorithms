#ifndef WORD_DISTANCE_H
#define WORD_DISTANCE_H

#include <unordered_map>
#include <string>
#include <vector>

class WordDistance { 
	std::unordered_map<std::string, std::vector<int> > *aMap;
public:
	WordDistance(std::vector<std::string> *words);
	int shortest(std::string word1, std::string word2);
}; 

#endif

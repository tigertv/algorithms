#ifndef TRIE_H
#define TRIE_H

#include "TrieNode.h"
#include <string>

class Trie{ 
	TrieNode* root = NULL;
public:
	Trie();
	void insert(std::string key);
	bool search(std::string key);
	bool startsWith(std::string prefix);
}; 

#endif

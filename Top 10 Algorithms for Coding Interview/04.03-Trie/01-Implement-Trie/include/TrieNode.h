#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#define TRIE_NODE_ALPHABET_SIZE 26

class TrieNode { 
public:
	char key;
	bool isLeaf;
	TrieNode *children[TRIE_NODE_ALPHABET_SIZE]; 
	TrieNode(char key);
	TrieNode(char key, bool isLeaf);
	char getKey();
}; 

#endif

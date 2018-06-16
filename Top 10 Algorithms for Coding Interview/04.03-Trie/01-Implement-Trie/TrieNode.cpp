#include "TrieNode.h"

TrieNode::TrieNode(char key) {
	TrieNode(key, false);
}

TrieNode::TrieNode(char key, bool isLeaf) {
	for (int i=0;i<TRIE_NODE_ALPHABET_SIZE;i++)
		this->children[i] = nullptr;
	this->key = key;
	this->isLeaf = isLeaf;
}

char TrieNode::getKey() {
	return this->key;
}


#include "Trie.h"

Trie::Trie() {
	this->root = new TrieNode(NULL);
}


void Trie::insert(std::string key) {
	TrieNode *p = root;
	for (auto &a : key) {
		int i = a - 'a';
		if (!p->children[i]) p->children[i] = new TrieNode(NULL);
		p = p->children[i];
	}

	p->isLeaf = true;
}

bool Trie::search(std::string key) {
	TrieNode *p = root;

	for (auto &a : key) {
		int i = a - 'a';
		if (!p->children[i]) return false;
		p = p->children[i];
	}

	return p->isLeaf;
}

bool Trie::startsWith(std::string prefix) {
	TrieNode *p = root;

	for (auto &a : prefix) {
		int i = a - 'a';
		if (!p->children[i]) return false;
		p = p->children[i];
	}

	return true;
}

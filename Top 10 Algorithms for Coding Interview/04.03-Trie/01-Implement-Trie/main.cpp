#include <iostream>
#include "Trie.h"
#include "TrieNode.h"

int main() { 
	using namespace std;

	Trie a;
	a.insert("man");
	bool result = a.search("man");

	if (result) {
		cout << "the key is in the trie" << endl;
	} else {
		cout << "the key is not in the trie" << endl;
	}

	a.startsWith("ma");

	if (result) {
		cout << "the prefix in the trie" << endl;
	} else {
		cout << "the prefix is not in the trie" << endl;
	}

	return 0;
} 

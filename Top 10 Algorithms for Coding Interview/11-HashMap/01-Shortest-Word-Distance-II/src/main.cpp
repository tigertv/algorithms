#include <iostream>
#include <vector>
#include <map>
#include "WordDistance.h"

int shortest(std::string word1, std::string word2) {
	return 0;
}

int main() { 
	using namespace std;
	
	vector<string> words = {"practice", "makes", "perfect", "coding", "makes"};
	WordDistance *wordDistance = new WordDistance(&words);

	int output = wordDistance->shortest("coding", "practice");
	cout << "Output:" << output << endl;

	output = wordDistance->shortest("makes", "practice");
	cout << "Output:" << output << endl;

	return 0;
} 


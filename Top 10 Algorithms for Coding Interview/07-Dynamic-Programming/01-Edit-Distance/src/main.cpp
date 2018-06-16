#include <iostream>
#include <string>

int minDistance(std::string word1, std::string word2) {
	const int len1 = word1.length();
	const int len2 = word2.length();
 
	int** dp = new int*[len1+1];
	for(int i = 0; i < len1+1; i++)
	    dp[i] = new int[len2+1];
 
	for (int i = 0; i <= len1; i++) {
		dp[i][0] = i;
	}
 
	for (int j = 0; j <= len2; j++) {
		dp[0][j] = j;
	}
 
	//iterate though, and check last char
	for (int i = 0; i < len1; i++) {
		char c1 = word1.at(i);
		for (int j = 0; j < len2; j++) {
			char c2 = word2.at(j);
 
			//if last two chars equal
			if (c1 == c2) {
				//update dp value for +1 length
				dp[i + 1][j + 1] = dp[i][j];
			} else {
				int replace = dp[i][j] + 1;
				int insert = dp[i][j + 1] + 1;
				int delete1 = dp[i + 1][j] + 1;
 
				int min = replace > insert ? insert : replace;
				min = delete1 > min ? min : delete1;
				dp[i + 1][j + 1] = min;
			}
		}
	}
 
	return dp[len1][len2];
}

int main() { 
	using namespace std;

	string s1 = "fork";
	string s2 = "dor";
	int distance = minDistance(s1, s2);

	cout << "s1=" << s1 << endl;
	cout << "s2=" << s2 << endl;
	cout << "distance=" << distance << endl;

	return 0;
} 

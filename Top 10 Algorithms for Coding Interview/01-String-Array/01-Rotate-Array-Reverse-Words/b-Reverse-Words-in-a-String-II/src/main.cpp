#include <iostream>

namespace stringspace {

	void reverse(char* s, int i, int j){
		while(i<j){
			char temp = s[i];
			s[i]=s[j];
			s[j]=temp;
			i++;
			j--;
		}
	}

	void reverseWords(char* s) {
		int i=0;
		int len = std::char_traits<char>::length(s);

		for(int j=0; j<len; j++){
			if(s[j]==' '){
				reverse(s, i, j-1);        
				i=j+1;
			}
		}
	 
		reverse(s, i, len-1);
		reverse(s, 0, len-1);
	}

}
 
int main() {
	using namespace stringspace;
	using namespace std;

	char str[] = "the sky is blue";
	cout << "input: " << str << endl;
	reverseWords(str);
	cout << "output: " << str << endl;
	return 0;
}

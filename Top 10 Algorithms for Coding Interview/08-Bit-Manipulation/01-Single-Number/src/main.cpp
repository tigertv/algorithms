#include <iostream>

int singleNumber(int A[], int size) {
	int x = 0;

	for(int i=0;i<size;i++) {
		x = x ^ A[i];
	}
	return x;
}

int main() { 
	using namespace std;

	int A[5] = {1,2,1,3,2};
	int singleNum = singleNumber(A, 5);

	cout << "sNum=" << singleNum << endl;

	return 0;
} 

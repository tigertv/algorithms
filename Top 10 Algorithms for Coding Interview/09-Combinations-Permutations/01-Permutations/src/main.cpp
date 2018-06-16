#include <iostream>

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void printArray(int *x, int size) {
	for (int i=0;i<size;i++) {
		std::cout << x[i];
	}
	std::cout << " ";
}

void permute(int *x, int arraySize, int left, int right) {
	if (left==right) {
		printArray(x, arraySize);
	} else {
		for (int i=left;i<=right;i++) {
			swap( (x+left), (x+i));
			permute(x, arraySize, left+1, right);
			swap( (x+left), (x+i));
		}
	}
}

int main() { 
	using namespace std;

	const int size = 3;
	int A[size] = {1,2,3};

	cout << "Input Array:" << endl;
	printArray(A, size);
	cout << endl;

	cout << "Permutations:" << endl;
	permute(A, size, 0, size-1); 
	cout << endl;

	return 0;
} 


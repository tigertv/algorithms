#include <iostream>

namespace arrayspace {
	using namespace std;

	void printArray(int *arr, int size) {
		for(int i=0;i<size;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void rotateToRight(int arr[], int n, int k){
		int *temp = new int[k];

		for(int i=0;i<k;i++) {
			temp[i] = arr[n-k+i];
		}

		for(int i=0;i<k;i++) {
			int j=n-k+i;
			while(j>k-1) {
				arr[j] = arr[j-k];
				j-=k;
			}
		}
		
		for(int i=0;i<k;i++) {
			arr[i] = temp[i];
		}

		delete [] temp;
	}

}

int main() {
	using namespace std;
	using namespace arrayspace;

	int n = 7;
	int k = 1;
	int arr[n] = {1,2,3,4,5,6,7};

	// print the arr
	cout << "input: ";
	printArray(arr, n);

	rotateToRight(arr, n, k);

	// output the arr
	cout << "output: ";
	printArray(arr, n);

	return 0;
}


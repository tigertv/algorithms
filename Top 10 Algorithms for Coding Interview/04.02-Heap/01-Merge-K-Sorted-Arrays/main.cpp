#include <iostream>
#include <array>

int* mergeSortedArrays( int arr1[], int arr1size, int arr2[], int arr2size) {
	int size = arr1size+arr2size;
	int *s = new int[size];

	int i=0,j=0;
	
	for(int ii=0;ii<size;ii++) {
		if(i==arr1size){
			s[ii] = arr2[j];
			j++;
		} else if (j==arr2size) {
			s[ii] = arr1[i];
			i++;
		} else if (arr1[i]<arr2[j]) {
			s[ii] = arr1[i];
			i++;
		} else {
			s[ii] = arr2[j];
			j++;
		}
	}

	return s;
}


int main() { 
	using namespace std;

	int arr1[] = { 1, 3, 5, 7 };
	int arr1size = sizeof(arr1)/sizeof(*arr1);
	int arr2[] = { 2, 4, 6, 8 };
	int arr2size = sizeof(arr2)/sizeof(*arr2);
	int arr3[] = { 0, 9, 10, 11 };
	int arr3size = sizeof(arr3)/sizeof(*arr3);

	int *result = mergeSortedArrays(arr1, arr1size , arr2, arr2size);
	result = mergeSortedArrays(result, arr1size+arr2size, arr3, arr3size);

	cout << "Input: " << endl;

	for(int i=0;i<arr1size;i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	for(int i=0;i<arr2size;i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;

	for(int i=0;i<arr3size;i++) {
		cout << arr3[i] << " ";
	}
	cout << endl;

	cout << "Output: " << endl;

	for(int i=0;i<arr1size+arr2size+arr3size;i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
} 

#include <iostream>
#include <vector>
#include "NumArray.h"

int main() { 
	using namespace std;

	vector<int>b = {2, 4, 6, 8};

	NumArray a(&b);
	int sum = a.sumRange(0,2);
	cout << "Sum: " << sum << endl;

	a.update(2, 33);
	sum = a.sumRange(0,2);
	cout << "Sum: " << sum << endl;

	return 0;
} 

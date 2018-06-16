#include <iostream>
#include "robot.h"

namespace arrayspace {
	using namespace std;

	void printArray(int *arr, int size) {
		for(int i=0;i<size;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	void print2DArray(int *arr, int rows, int columns) {
		for(int i=0;i<rows;i++) {
			for(int j=0;j<columns;j++) {
				cout << *arr<< " ";
				arr++;
			}
			cout << endl;
		}
	}

}

int main() {
	using namespace std;
	using namespace arrayspace;

	const int m=3,n=4;
	int square[m][n]={
		{ 1, 3, 2, 11 }
		,{ 4, 5, 6, 12 }
		,{ 7, 8, 9, 13 }
	};

	cout << "input: " << endl;
	print2DArray((int*)square, m, n);
	cout << endl;
	
	Point point;
	point.x=0;
	point.y=0;

	Robot robot;
	robot.place((int **)square, n, m, point);
	robot.go();
	int * track = robot.track();

	cout << "output: " << endl;
	printArray(track, n * m);

	return 0;
}

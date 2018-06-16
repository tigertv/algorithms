#include <iostream>
#include <memory>
#include "vessel.h"

void printVessels(Vessel* a, Vessel* b) {
	using namespace std;
	cout << "A: " << a->getCurrent() << " ";
	cout << "B: " << b->getCurrent() << endl;
}

int main() {
	using namespace std;

	Vessel *a = new Vessel(7);
	Vessel *b = new Vessel(10);
	printVessels(a, b);

	while(a->getCurrent() != 1) {
		if (b->isFull()) {
			b->pour();
			cout << "B pour  : ";
			printVessels(a, b);
		}

		if(a->getCurrent() == 0) {
			a->fill(); 
			cout << "A fill  : ";
			printVessels(a, b);
		}

		a->pour(b);
		cout << "A pour B: ";
		printVessels(a, b);


	}

	delete a;
	delete b;

	return 0;
}


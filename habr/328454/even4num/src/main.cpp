#include <iostream>
#include <cmath>

int getNumber() {
	srand(time(0));

	int result = 0;
	int last = 0;

	for(int i=0; i<4; i++) {
		int digit;

		// generate next digit 
		do {
			digit = rand()%10;
			if (i==3) {
				digit -= digit % 2;
			}
		} while (digit == last);

		last = digit;
		digit *= pow(10, 3-i);
		result += digit;
	}

	return result;
}

int main() {
	using namespace std;

	int digit = getNumber();
	cout << "Number: " << digit << endl;

	return 0;
}

#ifndef VESSEL_H
#define VESSEL_H

class Vessel {
	int current,capacity;
public:
	Vessel(int capacity);

	void fill();
	int fill(Vessel *vessel); 
	void pour();
	int pour(Vessel *vessel);
	int getCurrent();
	bool isFull();
};

#endif

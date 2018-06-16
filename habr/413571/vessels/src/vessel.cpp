#include "vessel.h"

Vessel::Vessel(int capacity){
	this->capacity = capacity;
	this->current = 0;
}

void Vessel::fill() {
	current = capacity;
}

int Vessel::fill(Vessel* fromVessel) {
	int liquid = fromVessel->getCurrent();
	int volume = capacity - current;
	int result;

	if (volume < liquid) {
		result = volume;
	} else {
		result = liquid;
	}

	current += result;

	return result;
}

void Vessel::pour() {
	current = 0;
}

int Vessel::pour(Vessel *toVessel){
	int poured = toVessel->fill(this);
	this->current -= poured;
	return poured;
}

int Vessel::getCurrent() {
	return this->current;
}

bool Vessel::isFull() {
	return current == capacity;
}

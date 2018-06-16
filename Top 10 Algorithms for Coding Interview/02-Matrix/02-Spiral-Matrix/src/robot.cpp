#include <iostream>
#include "robot.h"

Robot::Robot() {

}

Robot::~Robot() {
	delete [] this->tracking;
}

void Robot::changeDirection() {
	this->direction = Direction((this->direction+1)%4);
}

void Robot::place(int **square, int x, int y, Point point) {
	this->square = square;
	this->width = x;
	this->height = y;
	this->point = point;
	int inputSize = x * y;
	this->tracking = new int [inputSize];
	this->tracking[0] = (int)*((this->square+this->point.y*this->width) + this->point.x);
}

int* Robot::track() {
	return this->tracking;
}

void Robot::step() {

}

void Robot::go() {
	using namespace std;

	this->direction = LEFT_RIGHT;

	int outputIndex = 1;
	int downLimit = this->height-1;
	int rightLimit = this->width-1;
	int upLimit = 0;
	int leftLimit = 0;
	int *def = 0;

	while(1) {
		bool doBreak = true;

			switch (this->direction) {
			case Direction::LEFT_RIGHT:
				//cout << "LEFT TO RIGHT" << endl;
				this->point.x++;

				while (this->point.x<=rightLimit) {
					def = *((this->square+this->point.y*this->width) + this->point.x);
					this->tracking[outputIndex] = (int)def;
					outputIndex++;
					this->point.x++;
					doBreak = false;
				}
				this->point.x--;
				upLimit++;
				break;

			case Direction::UP_DOWN:
				//cout << "UP TO DOWN" << endl;
				this->point.y++;

				while (this->point.y<=downLimit) {
					def = *((this->square+this->point.y*this->width) + this->point.x);
					this->tracking[outputIndex] = (int)def;
					outputIndex++;
					this->point.y++;
					doBreak = false;
				}
				this->point.y--;
				upLimit--;
				break;

			case Direction::RIGHT_LEFT:
				//cout << "RIGHT TO LEFT" << endl;
				this->point.x--;

				while (this->point.x>=leftLimit) {
					def = *((this->square+this->point.y*this->width) + this->point.x);
					this->tracking[outputIndex] = (int)def;
					outputIndex++;
					this->point.x--;
					doBreak = false;
				}
				this->point.x++;
				rightLimit--;
				break;

			case Direction::DOWN_UP:
				//cout << "DOWN TO UP" << endl;
				this->point.y--;

				while (this->point.y>upLimit) {
					def = *((this->square+this->point.y*this->width) + this->point.x);
					this->tracking[outputIndex] = (int)def;
					outputIndex++;
					this->point.y--;
					doBreak = false;
				}
				this->point.y++;
				downLimit--;
				break;

			default:
				// TODO: Error hander
				cout << "ERROR" << endl;
				break;
			}

		if (doBreak) break;

		if (this->direction == Direction::DOWN_UP) {
			this->direction = Direction(0);
		} else {
			this->changeDirection();
		}

	} // end of while

}

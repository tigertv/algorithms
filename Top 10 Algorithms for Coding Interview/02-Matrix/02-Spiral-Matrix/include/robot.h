#ifndef ROBOT_H
#define ROBOT_H

struct Point {
	int x;
	int y;
};

class Robot {
	enum Direction {
		LEFT_RIGHT,
		UP_DOWN,
		RIGHT_LEFT,
		DOWN_UP
	};

	Point point;
	int **square;
	int width;
	int height;
	int *tracking;
	Direction direction;
public:
	Robot();
	~Robot();
	void go();
	void place(int **square, int x, int y, Point point);
	int* track();
	void step();
	void changeDirection();
};

#endif

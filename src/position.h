#ifndef POSITION_H
#define POSITION_H

class Position
{

private:
	int x;
	int y;
public:

	Position(int x=0, int y=0);
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);


};

#endif
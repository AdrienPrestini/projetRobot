#ifndef POSITION_H
#define POSITION_H

#include <string>
#include <ostream>
class Position
{

private:
	int x;
	int y;
public:
	Position(const Position&);
	Position(int a=0, int b=0):x(a),y(b){}
	int getX()const;
	void setX(int x);
	int getY()const;
	void setY(int y);
	//std::string print();

	friend std::ostream& operator<<(std::ostream&, const Position&);
};

#endif
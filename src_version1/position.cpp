#include "position.h"

#include <ostream>
Position::Position(const Position& p){
	this->x=p.getX();
	this->y=p.getY();
}

int Position::getX()const{
	return this->x;
}

int Position::getY()const{
	return this->y;
}

void Position::setX(int x){
	this->x=x;
}

void Position::setY(int y){
	this->y=y;
}

std::ostream& operator<<(std::ostream& os, const Position& pos){
	return os << "Position: (" << pos.getX() << ";" << pos.getY() << ")";
}

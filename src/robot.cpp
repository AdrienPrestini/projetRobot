#include "robot.h"
#include <string>
using namespace std;
Robot::Robot(string direction,Position pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj){
	this->direction=direction;
	this->pos = pos;
	this->ptr_plot=ptr_plot;
	this->ptr_obj=ptr_obj;
	this->mon_etat=mon_etat;
}
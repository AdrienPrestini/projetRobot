#include "robot.h"
#include <string>
#include <iostream>
using namespace std;

Robot::Robot(string direction,Position pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj){
	this->direction=direction;
	this->pos = pos;
	this->ptr_plot=ptr_plot;
	this->ptr_obj=ptr_obj;
	this->mon_etat=mon_etat;
}

void Robot::saisir(Objet* o){
	try{
		(this->mon_etat)->saisir();
		this->ptr_obj=o;
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}

void Robot::figer(){
	try{
		(this->mon_etat)->figer();
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}

void Robot::repartir(){
	try{
		(this->mon_etat)->repartir();
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}
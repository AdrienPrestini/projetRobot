#include "robot.h"
#include <string>
#include <iostream>
#include <cstddef>
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

void Robot::avancer(int x, int y){
	try{
		(this->mon_etat)->avancer();
		this->pos.setX(x);
		this->pos.setX(y);
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}
	
void Robot::tourner(string direction){
	try{
		(this->mon_etat)->tourner();
		this->direction=direction;
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}


void Robot::poser(){
	try{
		(this->mon_etat)->poser();
		this->ptr_obj=nullptr;
		this->ptr_plot=nullptr;
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}


int Robot::peser(){
	try{
		(this->mon_etat)->peser();
		if (ptr_obj!=nullptr)
		{
			return this->ptr_obj->getPoids();
		}
		
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
	return 0;
}


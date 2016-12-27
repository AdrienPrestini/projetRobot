#include "robot.h"
#include "ExceptionsRobot.h"
#include <string>
#include <iostream>
#include <cstddef>
#include "EtatRobotAVideFacePlot.h"

using namespace std;
int Robot::NB_OBS_MAX = 3;

Robot::Robot(string direction,Position* ptr_pos,Plot* ptr_plot,Objet* ptr_obj){
	this->direction=direction;
	this->ptr_pos = ptr_pos;
	this->ptr_plot =ptr_plot;
	this->ptr_obj=ptr_obj;
	this->mon_etat=EtatRobotAVideFacePlot::getSingleton();
	addObserver(new Afficheur());

}

Robot::Robot(){
	this->mon_etat=EtatRobotAVideFacePlot::getSingleton();
	ptr_pos = new Position();
	direction = "NORD";
}

void Robot::saisir(Objet* o){
	try{
		mon_etat = mon_etat->saisir();
		this->ptr_obj=o;
		notify();
	}catch(ExceptionsRobot::Saisir_Exception& e){
		cout<< e.what()<<endl;
	}
}

void Robot::figer(){
	try{
		mon_etat = mon_etat->figer();
		notify();
	}catch(ExceptionsRobot::Figer_Exception& e){
		cout<< e.what()<<endl;
	}
}

void Robot::repartir(){
	try{
		mon_etat = mon_etat->repartir();
		notify();
	}catch(ExceptionsRobot::Repartir_Exception& e){
		cout<< e.what()<<endl;
	}
}

void Robot::notify(){
	for(int i = 0; i < afficheurs.size(); i++){
		if(this->afficheurs.at(i) != NULL)
			this->afficheurs.at(i)->update(this);
	}
}

void Robot::addObserver(Afficheur* a){
		afficheurs.push_back(a);
}

void Robot::avancer(int x, int y){
	try{
		(this->mon_etat)->avancer();
		this->ptr_pos->setX(x);
		this->ptr_pos->setX(y);
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}
/*	
void Robot::tourner(string direction){
	try{
		(this->mon_etat)->tourner();
		this->direction=direction;
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}
*/

void Robot::poser(){
	try{
		(this->mon_etat)->poser();
		this->ptr_obj=nullptr;
		this->ptr_plot=nullptr;
	}catch(exception& e){
		cout<< e.what()<<endl;
	}
}

/*
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

*/
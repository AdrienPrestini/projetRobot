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
			this->afficheurs.at(i)->afficher(this);
	}
}

void Robot::addObserver(Afficheur* a){
		afficheurs.push_back(a);
}
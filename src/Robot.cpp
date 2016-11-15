/*
 * Robot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: Adrien Prestini & Antoine Rabenandrasana
 */

#include "MyIncludes/Robot.h"

#include <iostream>
using namespace std;

void Robot::saisir(Objet o){
	try{
		monEtat=monEtat->saisir();
		this->obj=o;
	}catch(EtatRobot::saisirException& e){
		cout<< e.what() << endl;
	}
}
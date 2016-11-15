/*
 * Robot.cpp
 *
 *  Created on: 14 nov. 2016
 *      Author: Adrien Prestini & Antoine Rabenandrasana
 */

#include "MyIncludes/Robot.h"

void Robot::saisir(Objet o){
	try{
		monEtat=monEtat.saisir();
		this->obj=o;
	}catch(exception& e)
		cout<< e.what() << endl;
}
/*
 * Robot.h
 *
 *  Created on: 14 nov. 2016
 *     Author: Adrien Prestini & Antoine Rabenandrasana
 *     Version : version 1
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include <string>

#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Position.h"

class Robot {
private:
	std::string direction;
	EtatRobot monEtat;
	Position maPosition;
	Objet obj;
	Plot plot;
public:
	
	void avancer(int x, int y);
	void tourner();
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	void figer();
	void afficher();

};

#endif /* ROBOT_H_ */

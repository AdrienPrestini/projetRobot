#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include "position.h"
#include "plot.h"
#include "EtatRobot.h"
#include <cstddef>
#include "Objet.h"

class Robot
{
private:
	std::string direction;
	Position pos;
	Plot* ptr_plot;
	Objet* ptr_obj;
	EtatRobot* mon_etat;
public:
	Robot(std::string direction,Position pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj);
	void avancer(int x, int y);
	void tourner(std::string direction);
	void saisir(Objet* o);
	void poser();
	int peser();
	void rencontrerPlot(Plot* plot); 	/*A FAIRE*/
	int evaluerPlot();			/*A FAIRE*/
	void figer();
	void repartir();
	void afficher();			/*A FAIRE*/
};

#endif
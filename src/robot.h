#ifndef ROBOT_H
#define ROBOT_H


#include "position.h"
#include "plot.h"
#include "EtatRobot.h"
#include "Afficheur.h"
#include "Objet.h"

#include <string>
#include <vector>
class Robot
{
private:
	static int NB_OBS_MAX;
	std::string direction;
	Position* ptr_pos;
	Plot* ptr_plot;
	Objet* ptr_obj;
	EtatRobot* mon_etat;
	std::vector<Afficheur*> afficheurs;
public:
	Robot(std::string direction,Position* pos,Plot* ptr_plot,EtatRobot* mon_etat,Objet* ptr_obj);
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

	//accesseurs
	EtatRobot* getEtat(){return mon_etat;}
	Position* getPosition(){return ptr_pos;}
	Plot* getPlot(){return ptr_plot;}
	Objet* getObjet(){return ptr_obj;}
	std::string getDirection(){return direction;}

	//partie observable du pattern observer/observable
	void notify();
	void addObserver(Afficheur* a);

};

#endif
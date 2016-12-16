#ifndef _LECTEUR_COMMANDE_H
#define _LECTEUR_COMMANDE_H

#include <stdio.h>
#include <string>
#include "Objet.h"
#include "plot.h"
using std::string;
class Objet;
class Plot;

class LecteurCommande {
private:
	string commandFileName;
public:
	LecteurCommande(string fileName);
	void nextCommand();
	int readInt();
	Objet readObjet();
	Plot readPlot();
	string readDirection();
};

#endif
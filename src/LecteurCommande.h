#ifndef _LECTEUR_COMMANDE_H
#define _LECTEUR_COMMANDE_H

#include <stdio.h>
#include <string>
#include <vector> 
#include <iostream>
#include <fstream>

#include "Objet.h"
#include "plot.h"
#include "Commande.h"
using std::string;
using std::ifstream;
class Objet;
class Plot;
class Commande;

class LecteurCommande {
private:
	string commandFileName;
	ifstream myFile;
	//std::vector<Commande*> commandes; // pas sur de cet attribut
public:
	LecteurCommande(string fileName);
	void nextCommand();
	int readInt();
	Objet readObjet();
	Plot readPlot();
	string readDirection();
};

#endif
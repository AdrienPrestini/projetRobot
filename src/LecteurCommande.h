#ifndef _LECTEUR_COMMANDE_H
#define _LECTEUR_COMMANDE_H

#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>

using std::string;
using std::ifstream;
using std::ios;

class LecteurCommande {
private:
	ifstream myFile;
public:
	LecteurCommande(string fileName);
	void nextCommand();
	int readInt();
	// Objet readObjet();
	// Plot readPlot();
	string readDirection();
};

#endif
#include "LecteurCommande.h"
#include "Commande.h"
#include "CommandeRobot.h"
	
LecteurCommande::LecteurCommande(string fileName){
	myFile.open(fileName);
}


void LecteurCommande::nextCommand(){
	string commande;
	std::cout<< "On lit les commandes" << std::endl;
	while(myFile >> commande){
		Commande::nouvelleCommande(commande,(*this))->execute();	
	}
	std::cout<< "fin de lecture des commandes" << std::endl;
}

int LecteurCommande::readInt(){
	int a;
	myFile >> a;
	return a;
}

// Objet LecteurCommande::readObjet(){
// 	//STUB
// 	return Objet(0);
// }
// Plot LecteurCommande::readPlot(){
// 	//STUB
// 	return Plot(0);
// }
string LecteurCommande::readDirection(){
	string direction;
	myFile >> direction;
	return direction;
}
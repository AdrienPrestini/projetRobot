#include "LecteurCommande.h"
#include "Commande.h"
//#include "CommandeRobot.h"
	
LecteurCommande::LecteurCommande(string fileName){
	myFile.open(fileName);
}


void LecteurCommande::nextCommand(){
	
	if(myFile.is_open())
		std::cout<< "On lit les commandes" << std::endl;
	else
		std::cout<< "On ne lit pas les commandes" << std::endl;
	string commande;
	
	while(myFile >> commande){
			
		Commande* c = Commande::nouvelleCommande(commande,this);
		c->execute();
	}
	std::cout<< "fin de lecture des commandes" << std::endl;
	myFile.close();
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
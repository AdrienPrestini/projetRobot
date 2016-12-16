#include "LecteurCommande.h"
LecteurCommande::LecteurCommande(string file){
	commandFileName = file;
}


// classe non implémentée pour le moment
void LecteurCommande::nextCommand(){
	//STUB
	return;
}

int LecteurCommande::readInt(){
	//STUB
	return 0;
}

Objet LecteurCommande::readObjet(){
	//STUB
	return Objet(0);
}
Plot LecteurCommande::readPlot(){
	//STUB
	return Plot(0);
}
string LecteurCommande::readDirection(){
	//STUB
	return " ";
}
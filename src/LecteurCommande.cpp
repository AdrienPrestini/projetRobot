#include "LecteurCommande.h"
	
LecteurCommande::LecteurCommande(string fil){
	commandFileName = fil;
	myFile.open(commandFileName);
}


// classe non implémentée pour le moment
void LecteurCommande::nextCommand(){
	//STUB
	string instruction;
	std::cout << "on lance une commande" << std::endl;
	std::cout << "etape 1" << std::endl;
	myFile >> instruction;
	std::cout << "etape 2" << std::endl;
	Commande* c = Commande::nouvelleCommande(instruction, this);
	std::cout << "etape création de la commande" << std::endl;
	//c->execute();
	std::cout << "etape execution de la commande" << std::endl;
	myFile.close();
	
}

int LecteurCommande::readInt(){
	int a;
	myFile >> a;
	
	return a;
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
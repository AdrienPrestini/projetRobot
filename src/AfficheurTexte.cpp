#include "AfficheurTexte.h"
#include "robot.h"
#include <string>

using namespace std;
void AfficheurTexte::afficher(Robot* observable){
	cout << "coucou afficher" << endl;
	if(observable == nullptr){
		cout << "il n'y a aucun robot à afficher" << endl;
	}else{
		string direction;
		if(observable->getDirection().compare("N") == 0)
			direction = "N";
		if(observable->getDirection().compare("S") == 0)
			direction = "S";
		if(observable->getDirection().compare("E") == 0)
			direction = "E";
		if(observable->getDirection().compare("O") == 0)
			direction = "O";
		cout << "Info sur le Robot : " << endl;
		if(observable->getEtat() != nullptr)
			cout << "Etat actuel : " << observable->getEtat()->getNom() << endl;
		if(observable->getPosition() != nullptr)
			cout << "Position du Robot : " << *(observable->getPosition()) << endl;
		cout << "Direction : " << direction << endl;
		if(observable->getObjet()!= nullptr)
			cout << *(observable->getObjet()) << endl;
		if(observable->getPlot()!=nullptr)
			cout << *(observable->getPlot()) << endl;

	}
	cout << endl;
}
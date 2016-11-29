#include "AfficheurTexte.h"
#include "robot.h"
#include <string>

using namespace std;
void AfficheurTexte::afficher(Robot* observable){
	if(observable == nullptr){
		cout << "il n'y a aucun robot à afficher" << endl;
	}else{
		string direction;
		if(observable->getDirection().compare("NORD") == 0)
			direction = "NORD";
		if(observable->getDirection().compare("SUD") == 0)
			direction = "SUD";
		if(observable->getDirection().compare("EST") == 0)
			direction = "EST";
		if(observable->getDirection().compare("OUEST") == 0)
			direction = "OUEST";
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
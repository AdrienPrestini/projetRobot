#include "Afficheur.h"
#include "robot.h"
#include <string>

using namespace std;
void Afficheur::afficher(){
	if(this->observable == NULL){
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
		if(observable->getEtat() != NULL)
			cout << "Etat actuel : " << observable->getEtat()->getNom() << endl;
		if(observable->getPosition() != NULL)
			cout << "Position du Robot : " << *(observable->getPosition()) << endl;
		cout << "Direction : " << direction << endl;
		if(observable->getObjet()!= NULL)
			cout << *(observable->getObjet()) << endl;
		if(observable->getPlot()!=NULL)
			cout << *(observable->getPlot()) << endl;

	}
}

void Afficheur::update(Robot* r){
	observable = r;
	afficher();
}
void Afficheur::addObservable(Robot* r){
	observable = r;
}
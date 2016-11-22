#include "plot.h"

#include <ostream>
Plot::Plot (const Plot& p){
	hauteur = p.getHauteur();
}
Plot::Plot(int hauteur){
	this->hauteur=hauteur;
}

int Plot::getHauteur()const{
	return this->hauteur;
}

std::ostream& operator<<(std::ostream& os, const Plot& p){
	return os << "hauteur du Plot: " << p.getHauteur() << std::endl;
}
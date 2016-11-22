#include "Objet.h"

#include <ostream>
Objet::Objet(const Objet& e){
	this->poids = e.getPoids();
}
Objet::Objet(int e){
	this->poids=e;
}

int Objet::getPoids()const{
	return this->poids;
}

std::ostream& operator<<(std::ostream& os, const Objet& o){
	return os << "poids de Objet: " << o.getPoids() << std::endl;
}
#ifndef OBJET_H
#define OBJET_H
#include <ostream>
class Objet
{
private:
	int poids;
public:
	Objet(const Objet&);
	Objet(int e);
	int getPoids()const;
	friend std::ostream& operator<<(std::ostream&, const Objet&);
};

#endif
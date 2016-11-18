#ifndef PLOT_H
#define PLOT_H
#include <ostream>

class Plot
{
private:
	int hauteur;
public:
	Plot(const Plot&);
	Plot(int hauteur);
	int getHauteur()const;
	friend std::ostream& operator<<(std::ostream&, const Plot&);
};

#endif
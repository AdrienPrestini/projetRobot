#ifndef _AFFICHEUR_TEXTE_H
#define _AFFICHEUR_TEXTE_H

#include <iostream>
#include <cstddef>
#include "Afficheur.h"


class AfficheurTexte : public Afficheur {

public:
	virtual void afficher(Robot* observable);
};

#endif
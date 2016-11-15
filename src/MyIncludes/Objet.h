/*
 * Objet.h
 *
 *  Created on: 14 nov. 2016
 *      Author: epu
 */

#ifndef OBJET_H_
#define OBJET_H_

class Objet {
private:
	int poids;
public:
	Objet();
	virtual ~Objet();
	int getPoids();
};

#endif /* OBJET_H_ */

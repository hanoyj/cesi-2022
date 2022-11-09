#pragma once

#include "AbstractParcours.h"

/*
* Classe definissant un parcours de point 2D. Elle implemente la classe abstraite AbstractParcours et doit donc implementer les fonctions virtuelles pures.
* On dit que CLParcours2D specialise la classe AbstractParcours, et que le classe AbstractParcours g�n�ralise la classe CLParcours2D
*/
class Parcours2D : public AbstractParcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	Parcours2D(int taille);

	// Affiche un message specifique au parcours 2D (cf fonction virtuelle de la classe AbstractParcours)
	void message();
	
protected:
	virtual double calculDistanceEntrePoints(int index);
};

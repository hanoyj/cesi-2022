#pragma once

#include "CLPoint.h"

/*
* La classe CLPoint3D h�rite de la classe CLPoint. De ce fait, une contient les m�mes membres et peut utiliser les m�mes fonctions que celles de la classe CLPoint
*/
class CLPoint3D : public CLPoint
{
public:
	// Constructeur par defaut
	CLPoint3D();

	// Constructuer prenant en compte x, y et z
	CLPoint3D(double x, double y, double z);

	// Constructuer par recopie
	CLPoint3D(const CLPoint& p);

	// Fonction permettan d'afficher le point3D, derivee de la class CLPoint
	void afficher() const;

private:
	// fonction d'initialisation de l'objet
	void initObj(double);
};
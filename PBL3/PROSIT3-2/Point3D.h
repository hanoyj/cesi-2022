#pragma once

#include "Point.h"

/*
* La classe CLPoint3D h�rite de la classe CLPoint. De ce fait, une contient les m�mes membres et peut utiliser les m�mes fonctions que celles de la classe CLPoint
*/
class Point3D : public Point
{
public:
	// Constructeur par defaut
	Point3D();

	// Constructuer prenant en compte x, y et z
	Point3D(double x, double y, double z);

	// Constructuer par recopie
	Point3D(const Point& p);
	// Constructuer par recopie
	Point3D(const Point3D& p);

	// M�thode permettant de retourner la valeur z
	double getZ() const;
	// M�thode permettant d'affecter la valeur z
	void setZ(double);

	// M�thode permettant d'afficher le point3D, derivee de la class CLPoint
	void afficher() const;

	// M�thode de calcul de distance entre 2 points
	double distance(const Point3D& point) const;

private:
	// Valeur de la composante en z
	double z;

	// M�thode d'initialisation de l'objet
	void initObj(double z);
};
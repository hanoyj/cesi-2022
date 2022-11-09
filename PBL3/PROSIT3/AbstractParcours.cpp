#include "AbstractParcours.h"

AbstractParcours::AbstractParcours(int taille)
{
	this->taille = taille;
	this->index = 0;

	// Les [] permettent de creer un tableau de CLPoint
	this->parcours = new Point*[this->taille];
	this->distance = 0.0;
}

void AbstractParcours::ajouterPoint(Point* p)
{
	this->parcours[this->index] = p;
	this->index = this->index + 1;
}

double AbstractParcours::calculDistance()
{
	int i;
	for (i = 0; i < taille - 1; i++)
	{
		distance += this->calculDistanceEntrePoints(i);
	}
	return distance;
}

void AbstractParcours::message()
{
}
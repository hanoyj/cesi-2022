#include "Parcours2D.h"

#include <iostream>
using namespace std;

Parcours2D::Parcours2D(int taille):
    AbstractParcours(taille)
{
}

void Parcours2D::message()
{
    cout << "Calcul d'un parcours de type 2D" << endl;
}

double Parcours2D::calculDistanceEntrePoints(int index)
{
    return parcours[index + 1]->calculDistance(*parcours[index]);
    //return sqrt(pow(parcours[index + 1]->getX() - parcours[index]->getX(), 2) + pow(parcours[index + 1]->getY() - parcours[index]->getY(), 2));
}
#include "Parcours3D.h"

#include <iostream>
using namespace std;

Parcours3D::Parcours3D(int taille):
    AbstractParcours(taille)
{
}

void Parcours3D::message()
{
    cout << "Calcul d'un parcours de type 3D" << endl;
}

double Parcours3D::calculDistanceEntrePoints(int index)
{
    return parcours[index + 1]->calculDistance(*parcours[index]);
    //return sqrt(pow(parcours[index+1]->getX() - parcours[index]->getX(), 2) + pow(parcours[index+1]->getY() - parcours[index]->getY(), 2) + pow(parcours[index+1]->getZ() - parcours[index]->getZ(), 2));
}
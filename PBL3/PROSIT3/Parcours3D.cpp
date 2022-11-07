#include "Parcours3D.h"

#include <iostream>
using namespace std;

Parcours3D::Parcours3D(int taille):
    AbstractParcours(taille)
{
}

double Parcours3D::calculDistance()
{
    int i;
    for (i = 0; i < taille - 1; i++)
    {
        distance += parcours[i + 1]->calculDistance(*parcours[i]);
        //distance += sqrt(pow(parcours[i+1]->getX() - parcours[i]->getX(), 2) + pow(parcours[i+1]->getY() - parcours[i]->getY(), 2) + pow(parcours[i+1]->getZ() - parcours[i]->getZ(), 2));
    }
    return distance;
}

void Parcours3D::message()
{
    cout << "Calcul d'un parcours de type 3D" << endl;
}
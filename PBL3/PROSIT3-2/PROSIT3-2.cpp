// PROSIT3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Point.h"
#include "Point3D.h"
#include "Parcours.h"

#include <iostream>

using namespace std;

int main()
{
	Parcours<Point>* parcours = new Parcours<Point>();

	parcours->ajouterPoint(new Point(0.0, 0.0));
	parcours->ajouterPoint(new Point(1.0, 1.0));
	parcours->ajouterPoint(new Point(2.0, 2.0));

	cout << "Calcul d'un parcours de type 2D" << endl;
	cout << parcours->calculDistance() << endl;

	cout << "------------------" << endl;

	Parcours<Point3D>* parcours2 = new Parcours<Point3D>();

	parcours2->ajouterPoint(new Point3D(0.0, 0.0, 0.0));
	parcours2->ajouterPoint(new Point3D(1.0, 1.0, 1.0));
	parcours2->ajouterPoint(new Point3D(2.0, 2.0, 2.2));

	cout << "Calcul d'un parcours de type 3D" << endl;
	cout << parcours2->calculDistance() << endl;

	cout << "------------------" << endl;

	Point* p1 = new Point(0.0, 0.0);
	Point3D* p2 = new Point3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficher();
}


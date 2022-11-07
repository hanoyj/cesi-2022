// PROSIT3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Point.h"
#include "Point3D.h"
#include "Parcours2D.h"
#include "Parcours3D.h"

#include <iostream>

using namespace std;

int main()
{
	Point* p1;
	Point* p2;
	Point* p3;

	//AbstractParcours* parcours;
	// ou aussi plus élégant si on utilise une interface
	IParcours* parcours;

	p1 = new Point(0.0, 0.0);
	p2 = new Point(1.0, 1.0);
	p3 = new Point(2.0, 2.0);
	parcours = new Parcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	cout << "------------------" << endl;

	p1 = new Point3D(0.0, 0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);
	p3 = new Point3D(2.0, 2.0, 2.2);
	parcours = new Parcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	parcours->message();
	cout << parcours->calculDistance() << endl;

	cout << "------------------" << endl;

	p1 = new Point(0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficher();
}


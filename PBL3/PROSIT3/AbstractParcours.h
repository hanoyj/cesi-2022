#pragma once

#include "IParcours.h"
#include "Point.h"

/*
* Classe abstraite d'un parcours. Elle contient des fonctions virtuelles avec une implementation de base, elle peut etre derviee
* 
* D?finition : une classe abstraite est une classe dont l'impl?mentation n'est pas compl?te et qui n'est pas instanciable. Elle sert de base ? d'autres classes d?riv?es. 
* 
* Ici, je la nomme Abstract mais ce n'est pas totalement vrai, puisque la classe peut ?tre instanci?e (aucune methode virtuelle pure restante)
*/
class AbstractParcours: public IParcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	AbstractParcours(int taille);

	// Permet d'ajouter un point au parcours
	void ajouterPoint(Point* p);

	// Calcul la distance du parcours
	double calculDistance();

	// Affiche un message specifique au parcours
	// La fonction est virtuelle. toute classe derinvant la classe AbstractParcours peut re-implementer cette fonction
	virtual void message();

protected:
	// Liste des points r?alisant le parcours, c'est un tableau de pointeur de Point
	Point** parcours;
	// Taille du parcours
	int taille;
	// Index courant
	int index;
	// Distance du parcours
	double distance;

	// Calcul la distance entre 2 points ? un index donn?
	// La fonction est virtuelle. toute classe derinvant la classe AbstractParcours peut re-implementer cette fonction
	virtual double calculDistanceEntrePoints(int index) = 0;
};

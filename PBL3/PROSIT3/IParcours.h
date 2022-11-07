#pragma once

class Point;

/*
* Classe virtuelle pure, ou interface. Elle contient des fonctions virtuelles pure, cette classe ne peut pas etre instanci�e.
* 
* D�finition : une classe virtuelle est une classe qui est compos�e uniquement de fonction virtuelle pure (�quivalent interface en Java ou C#).
*/
class IParcours
{
public:
	// Permet d'ajouter un point au parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual void ajouterPoint(Point* p) = 0;

	// Calcul la distance du parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual double calculDistance() = 0;

	// Affiche un message specifique au parcours
	// La fonction est virtuelle pure. toute classe implementant l'interface IParcours devra obligatoirement implementer cette fonction
	virtual void message() = 0;
};
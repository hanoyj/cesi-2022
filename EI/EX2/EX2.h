#pragma once

#include <iostream>


// A.	Définir une classe A, y déclarer une méthode virtuelle pure void afficher().
class A 
{
public:
	// Méthode virtuelle pure afficher
	virtual void afficher() = 0;
};


// B.	Définir une classe B, la faire hériter de la classe A, y ajouter une méthode void afficher() 
// dont le comportement est d’afficher « Je suis B ».
class B : public A 
{
public:
	void afficher() 
	{ 
		std::cout << "Je suis B" << std::endl; 
	}
};


//C.	Définir une classe C, la faire hériter de la classe A, y ajouter une méthode void afficher()
// dont le comportement est d’afficher « Je suis C ».
class C : public A 
{
public:
	void afficher() 
	{ 
		std::cout << "Je suis C" << std::endl; 
	}
};

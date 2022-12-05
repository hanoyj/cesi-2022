#pragma once

#include <iostream>


// A.	D�finir une classe A, y d�clarer une m�thode virtuelle pure void afficher().
class A 
{
public:
	// M�thode virtuelle pure afficher
	virtual void afficher() = 0;
};


// B.	D�finir une classe B, la faire h�riter de la classe A, y ajouter une m�thode void afficher() 
// dont le comportement est d�afficher � Je suis B �.
class B : public A 
{
public:
	void afficher() 
	{ 
		std::cout << "Je suis B" << std::endl; 
	}
};


//C.	D�finir une classe C, la faire h�riter de la classe A, y ajouter une m�thode void afficher()
// dont le comportement est d�afficher � Je suis C �.
class C : public A 
{
public:
	void afficher() 
	{ 
		std::cout << "Je suis C" << std::endl; 
	}
};

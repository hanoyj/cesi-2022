// EX5.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "A.h"
#include "B.h"
#include <iostream>

using namespace std;

// Version tout dans le main
//// définition du type (fx) de pointeur de fonction (void XXX(void))
//typedef void(*fx)(void);
//// variable globale de ce pointeur de fonction
//fx event;
//
//class A
//{
//public:
//	void m(void)
//	{
//		cout << "A" << endl;
//		// appel du pointeur de fonction
//		event();
//	}
//};
//
//class B
//{
//public:
//	B(void)
//	{
//		// affectation du pointeur de fonction (ie méthode statique de la classe)
//		event = &B::m;
//	}
//
//	static void m(void)
//	{
//		cout << "B" << endl;
//	}
//};


int main(void)
{
	int pause;

	// Instanciation des 2 objets
	A oA;
	B oB;

	// Appel de la méthode m() sur l'objet A
	oA.m();

	cin >> pause;
	return pause;
}
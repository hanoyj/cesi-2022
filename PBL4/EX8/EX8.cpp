// EX8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "A.h"
#include <iostream>

using namespace std;


int main(void)
{
	int pause;

	A* p;
	for (int i = 0; i < 10; i++)
	{
		p = new A(10000);
		// Destruction de l'instance car elle n'est plus utilisée
		delete p;
	}

	cin >> pause;
	return pause;
}
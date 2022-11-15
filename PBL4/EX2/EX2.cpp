// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;


// 1: Déclaration de 3 fonctions basiques
void fx1(void)
{
	cout << "FX1" << endl;
}

void fx2(void)
{
	cout << "FX2" << endl;
}

void fx3(void)
{
	cout << "FX3" << endl;
}

// 2: Déclaration du type de pointeur de fonction
typedef void(*fx)(void);
// 3: Déclaration d'un tableau de ce pointeur de fonction (3 éléments)
fx pf[3];


int main(void)
{
	int pause;

	// 4: Assignation des fonctions aux points de fonctions
	pf[0] = &fx1;
	pf[1] = &fx2;
	pf[2] = &fx3;

	// 5: Appel de l'ensemble des fonctions par itération
	for (int i = 0; i < 3; i++)
	{
		pf[i]();
	}

	cin >> pause;
	return pause;
}
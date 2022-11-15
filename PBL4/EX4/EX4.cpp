// EX4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;


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

// Déclaration du pointeur de fonction
typedef void(*fx)(void);


int main(void)
{
	int pause = 0;
	int nombreEtape = 0;
	int indiceFonction = 0;

	// Déclaration du tableau de pointeurs de fonction
	fx addOfFx[3];
	// Affectation des pointeurs de fonction
	addOfFx[0] = &fx1;
	addOfFx[1] = &fx2;
	addOfFx[2] = &fx3;

	cout << "Combien d'etape(s) doit contenir votre processus ?" << endl;
	// Nombre d'état du programme
	cin >> nombreEtape;
	// Allocation du tableau de pointeurs de fonction à appeler (taille = nombre demandé par l'utilisateur)
	fx* pcs = new fx[nombreEtape];

	// Boucle sur le nombre d'étapes demandées par l'utilisateur
	for (int i = 0; i < nombreEtape; i++)
	{
		cout << "Quelle fonction (1 - 3) a utiliser pour l'etape (" << i + 1 << ") de votre processus ?" << endl;
		cin >> indiceFonction;
		// Affectation du pointeur de la fonction correspondante pour l'étape en cours
		// La numérotation des fonctions va de 1 à 3, en revanche les indices dans le tableau commence à 0 (d'où le -1)
		pcs[i] = addOfFx[indiceFonction - 1];
	}

	// Exécution du processus
	cout << "Execution du processus ..." << endl;
	for (int i = 0; i < nombreEtape; i++)
	{
		pcs[i]();
	}

	// Libération des ressources
	delete[] pcs;

	cin >> pause;
	return pause;
}
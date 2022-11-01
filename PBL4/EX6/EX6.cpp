// EX6.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

using namespace std;

// Déclaration de la structure personne
struct Personne
{
	int age = 0;
	string prenom = "INCONNU";
	Personne* NEXT = NULL;
};

// Définition du type P via typedef
typedef Personne P;

void afficher(P* liste)
{
	// Parcourt de l'ensemble des maillons (s'arrêt lorsque P->NEXT n'est pas alloué ie NULL)
	while (liste != NULL)
	{
		cout << "Prenom= " << liste->prenom << ", age= " << liste->age << ", maillon suivant= " << liste->NEXT << endl;
		liste = liste->NEXT;
	}
}

int main(void)
{
	int pause;
	// Instanciation des 3 struct de type Personne
	P p1, p2, p3;

	// Remplisage des structures + chainage des maillons
	p1.age = 10; p1.prenom = "AA"; p1.NEXT = &p2;	// maillon suivant = p2
	p2.age = 20; p2.prenom = "BB"; p2.NEXT = &p3;	// maillon suivant = 3
	p3.age = 30; p3.prenom = "CC"; p3.NEXT = NULL;	// aucun maillon suivant

	// Affichage de la liste des personnes => on commence par p1
	P* adresseDeDebut = &p1;
	afficher(adresseDeDebut);

	cin >> pause;
	return pause;
}
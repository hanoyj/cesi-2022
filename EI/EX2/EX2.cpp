// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "EX2.h"


//D.	Définir une fonction void afficherObjet(A *) (en dehors de toute classe) dont le comportement
// est d’appeler la méthode void afficher() de l’objet passé en paramètre.
void afficher(A* a) 
{ 
	a->afficher(); 
}


//E.	Définir une fonction int main(), y créer des instances de type B et C via allocation dynamique et les affecter à des variables.
int main()
{
	B* b = new B();
	C* c = new C();

	// F.	Passer ces objets en paramètre de la fonction void afficherObjet(A *).
	afficher(b);
	afficher(c);

	// Destruction des objets tout de même
	delete b;
	delete c;
	return 0;
}

// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CLa.h"
#include <iostream>


//F.	Dans la fonction int main() :
int main()
{
	//F.a.	Réaliser une allocation automatique. Utiliser le constructeur par défaut.
	CLa o1;
	//F.b.	Réaliser une allocation dynamique. Utiliser le constructeur surchargé.
	CLa* o2 = new CLa(1, 2);

	//F.c.	Appeler les mutateurs sur l’objet créé avec le constructeur par défaut.
	o1.setNb1(0);
	o1.setNb2(1);

	//F.d.	Appeler la méthode somme de chaque objet et afficher le résultat.
	std::cout << o1.somme() << std::endl;
	std::cout << o2->somme() << std::endl;

	//G.	Libérer la mémoire de l’objet dynamique.
	delete o2;
	return 0;
}

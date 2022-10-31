// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Voiture.h"
#include "VoitureSport.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Creation voiture1 de type Voiture" << endl;
    Voiture* voiture1 = new Voiture(200, 5);
    cout << "Creation voiture2 de type VoitureSport" << endl;
    Voiture* voiture2 = new VoitureSport(500, 10);

    cout << endl;
    cout << "Main Voiture accelerer()" << endl;
    voiture1->accelerer();

    cout << "Main Voiture De Sport accelerer()" << endl;
    voiture2->accelerer();

    cout << "Test" << endl;
    (voiture2 = voiture1)->accelerer();
    // Dans ce cas la voiture1 est déjà à sa vitesse max donc pas de modification

    // Dans ce cas la, il n'est plus possible de supprimer la memoire de voiture 2 car on a perdu son adresse
    // Ce n'est pas bien

    return 0;
}

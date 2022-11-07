// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "ClSvcFichier.h"
#include <iostream>

int main()
{
    string path("myfile.txt");
    string message("bonjour");

    ClSvcFichier* fichier = new ClSvcFichier();
    fichier->ecrire(message, path);

    message = fichier->lire(path);
    cout << message << endl;
    
    delete fichier;
    return 0;
}

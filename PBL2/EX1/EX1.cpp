// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "clcorbeille2.h"
#include <iostream>

int main()
{
    CLcorbeille2* fichier;
    string path;
    string message;

    fichier = new CLcorbeille2();
    path = "myfile.txt";
    message = "bonjour";

    fichier->ecrire(message, path);

    message = fichier->lire(path);
    cout << message << endl;
    
    delete fichier;
    return 0;
}

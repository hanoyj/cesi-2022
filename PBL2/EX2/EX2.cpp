// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "ClSvcFichier.h"

int main()
{
    string path("myfile2.txt");
    string message("bonjour");
    int buffLength = message.length();

    ClSvcFichier* fichier = new ClSvcFichier();

    fichier->ecrireBIN(message, path, buffLength);
    system("PAUSE");

    message = fichier->lireBIN(path, buffLength);
    cout << message << endl;

    delete fichier;
    return 0;
}


// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CLcorbeille2.h"

int main()
{
    CLcorbeille2* fichier;
    string path;
    string message;
    int buffLenght;

    fichier = new CLcorbeille2();

    path = "myfile2.txt";
    message = "bonjour";
    buffLenght = message.length();

    fichier->ecrireBIN(message, path, buffLenght);
    system("PAUSE");

    message = fichier->lireBIN(path, buffLenght);
    cout << message << endl;

    delete fichier;
    return 0;
}


// EX3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CLcorbeille2.h"

int main()
{
    CLcorbeille2* cesar;
    cesar = new CLcorbeille2();
    cout << cesar->getCR('a') << endl;
    cout << cesar->getCR('b') << endl;
    cout << cesar->getCR('c') << endl;
    cout << cesar->getCR('d') << endl;
    cout << "-------------" << endl;
    cout << cesar->getCL('b') << endl;
    cout << cesar->getCL('c') << endl;
    cout << cesar->getCL('d') << endl;
    cout << cesar->getCL('e') << endl;

    system("PAUSE");

    return 0;
}
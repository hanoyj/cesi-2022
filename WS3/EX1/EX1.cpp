// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Rectangle.h"
#include "Cube.h"

#include <iostream>

using namespace std;


int main()
{
    Objet2D* objet;

    char o;
    int longeur, largeur;


    cout << "Saisir les informations de l'objet" << endl;
    cout << "(R)ectangle ou (C)ube" << endl;
    do {
        cin >> o;
    } while ((o != 'R') && (o != 'r') && (o != 'C') && (o != 'c'));

    if ((o == 'R') || (o == 'r')) 
    {
        cout << "Longeur du rectangle ?" << endl;
        cin >> longeur;
        cout << "Longeur du rectangle ?" << endl;
        cin >> largeur;
        objet = new Rectangle(longeur, largeur);
    }
    else
    {
        cout << "Cote du cube ?" << endl;
        cin >> longeur;
        objet = new Cube(longeur);
    }

    cout << endl << objet->afficheInfo() << endl;
}

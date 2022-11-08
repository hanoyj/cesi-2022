// EX2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "ListeObjets.h"
#include "Rectangle.h"
#include "Cube.h"

#include <iostream>

using namespace std;

int main()
{
    ListeObjets* liste;
    int taille;
    cout << "Choisissez le nombre d'elements" << endl;
    cin >> taille;
    liste = new ListeObjets(taille);
    for (int i = 0; i < taille; i++)
    {
        char o;
        int longeur, largeur;
        cout << "Saisir les informations de l'objet[" << i << "]" << endl;
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
            liste->add(new Rectangle(longeur, largeur));
        }
        else
        {
            cout << "Cote du cube ?" << endl;
            cin >> longeur;
            liste->add(new Cube(longeur));
        }
    }

    cout << endl;
    liste->afficheInfos();
    delete liste;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

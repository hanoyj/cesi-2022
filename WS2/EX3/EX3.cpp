// EX3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Etudiant.h"
#include "promo.h"

#include <iostream>

int main()
{
    Promo CPIA2;
    int choix;
    do {
        cout << "Tapez 1 pour inserer les infos des eleves, 2 de les charger a partir du fichier, 0 pour quitter" << endl;
        cin >> choix;
        
        switch (choix) {
        case 0:
            exit(0);
        case 1:
            CPIA2.inputNotesUtilisateur();
            CPIA2.inputNotesAUFichier("CPIA2.txt");
            break;
        case 2:
            CPIA2.outputNotesDUFichier("CPIA2.txt");
            break;
        }

        CPIA2.afficherEtudiants();
    } while (choix != 0);

    return 0;
}

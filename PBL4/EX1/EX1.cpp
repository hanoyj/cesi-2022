// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

// 1: Déclaration d'une fonction
void fonction1(void)
{
    cout << "Appel Fonction 1 par pointeur" << endl;
}

// 2: Déclaration du type de pointeur de fonction, même signature de la fonction ci-dessus : void(*pointeurFonction) (void)
typedef void(*PointeurFonction) (void);


int main(void)
{
    int pause = 0;
    // 3: Déclaration d'une variable de ce type (pointeur de fonction)
    PointeurFonction pFonction;
    // 4: Affectation de la fonction "fonction" à la variable
    pFonction = &fonction1;
    // 5: Appel via le pointeur de fonction
    pFonction();

    cin >> pause;
    return pause;
}
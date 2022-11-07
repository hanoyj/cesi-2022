// EX4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Xor.h"

int main()
{
    Xor* xOR = new Xor();
    char x = 'x';
    char r;

    r = xOR->applyXOR('f', x);
    cout << r << endl;

    r = xOR->applyXOR(r, x);
    cout << r << endl;

    system("PAUSE");
    return 0;
}

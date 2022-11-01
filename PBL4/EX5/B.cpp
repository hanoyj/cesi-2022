#include "B.h"
#include "EX5.h"
#include <iostream>

using namespace std;

// affectation du pointeur de fonction (ie méthode statique de la classe)
fx event = &B::m;

void B::m(void)
{
	cout << "B" << endl;
}
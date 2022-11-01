#include "A.h"
#include "EX5.h"
#include <iostream>

using namespace std;

void A::m(void)
{
	cout << "A" << endl;
	// appel du pointeur de fonction
	event();
}
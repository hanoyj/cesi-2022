#include "A.h"
#include <iostream>

using namespace std;

A::A(int tailleTab)
{
	t = new int[tailleTab];
}

A::~A(void)
{
	delete[]t;
	cout << "Destruction de A" << endl;
}

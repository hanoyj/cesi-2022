#include "Gpcs1.h"
#include <iostream>

using namespace std;

void Gpcs1::gpcs1S1()
{
	cout << "Service gpcs1s1" << endl;
	this->o1.afficher();
	this->o2.afficher();
}

void Gpcs1::gpcs1S2()
{
	cout << endl << "Service gpcs1s2" << endl;
	this->o3.afficher();
}

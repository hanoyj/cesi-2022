#pragma once

#include <iostream>

using namespace std;

class Objet2D
{
protected:
	int dim1;
	int dim2;

public:
	Objet2D();
	Objet2D(int dim1, int dim2);

	virtual int getPerimetre();
	virtual int getAire();
	// M�thode virtuelle pure => la classe est abstraite
	virtual string afficheInfo() = 0;
};


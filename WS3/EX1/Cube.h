#pragma once
#include "Rectangle.h"

class Cube : public Rectangle
{
public:
	Cube();
	Cube(int cote);

	int getCote();

	int getPerimetre();
	int getAire();
	string afficheInfo();
};


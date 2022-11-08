#include "Cube.h"

#include <string>

Cube::Cube() :
	Rectangle()
{

}

Cube::Cube(int cote) :
	Rectangle(cote, cote)
{
}

int Cube::getCote() 
{
	return getLongueur();
}

int Cube::getPerimetre()
{
	return Rectangle::getPerimetre();
}

int Cube::getAire() 
{
	return Rectangle::getAire();
}

string Cube::afficheInfo()
{
	return "Cube: cote= " + to_string(getCote()) + ", perimetre= " + to_string(getPerimetre()) + ", aire= " + to_string(getAire());
}

#include "Rectangle.h"

#include <string>

Rectangle::Rectangle() :
	Objet2D() 
{
}

Rectangle::Rectangle(int dim1, int dim2) :
	Objet2D(dim1, dim2)
{
}

int Rectangle::getLongueur() 
{
	return dim1;
}
int Rectangle::getLargeur()
{
	return dim2;
}

int Rectangle::getPerimetre()
{
	return (dim1 + dim2) * 2;
}

int Rectangle::getAire() 
{
	return dim1 * dim2;
}

string Rectangle::afficheInfo() 
{
	return "Rectangle: longueur= " + to_string(getLongueur()) + ", largeur= " + to_string(getLargeur()) + ", perimetre= " + to_string(getPerimetre()) + ", aire= " + to_string(getAire());
}

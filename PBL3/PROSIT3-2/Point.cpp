#include "Point.h"

#include <iostream>

using namespace std;

Point::Point()
{
	this->initObj(0, 0);
}

Point::Point(double x, double y)
{
	this->initObj(x, y);
}

Point::Point(const Point& p)
{
	this->initObj(p.getX(), p.getY());
}

void Point::initObj(double x, double y)
{
	this->setX(x);
	this->setY(y);
}

void Point::gauche()
{
	if (this->getX() - 1 >= 0)
	{
		this->setX(-1);
	}
}

void Point::droite()
{
	this->setX(1);
}

void Point::haut()
{
		this->setY(this->getY() + 1);
}

void Point::bas()
{
	if (this->getY() - 1 >= 0)
	{
		this->setY(this->getY() - 1);
	}
}

double Point::getX() const
{
	return this->x;
}

void Point::setX(double x)
{
	if (x < 0)
	{
		this->x = 0;
	}
	else
	{
		this->x = x;
	}
}

double Point::getY() const
{
	return this->y;
}

void Point::setY(double y)
{
	if (y < 0)
	{
		this->y = 0;
	}
	else
	{
		this->y = y;
	}
}


double Point::getZ() const
{
	return z;
}

void Point::setZ(double z)
{
	if (z < 0)
	{
		this->z = 0;
	}
	else
	{
		this->z = z;
	}
}


void Point::afficher() const
{
	cout << "Le point " << this << " a pour coordonnees :" << endl;
	cout << "(X = " << this->getX() << ")" << endl;
	cout << "(Y = " << this->getY() << ")" << endl;
}

double Point::distance(const Point& point) const
{
	return sqrt(pow(point.getX() - this->getX(), 2) + pow(point.getY() - this->getY(), 2));
}
#include "CLPoint.h"

#include <iostream>

using namespace std;

CLPoint::CLPoint()
{
	this->initObj(0, 0);
}

CLPoint::CLPoint(double x, double y)
{
	this->initObj(x, y);
}

CLPoint::CLPoint(const CLPoint& p)
{
	this->initObj(p.getX(), p.getY());
}

void CLPoint::initObj(double x, double y)
{
	this->setX(x);
	this->setY(y);
}

void CLPoint::gauche()
{
	if (this->getX() - 1 >= 0)
	{
		this->setX(-1);
	}
}

void CLPoint::droite()
{
	this->setX(1);
}

void CLPoint::haut()
{
		this->setY(this->getY() + 1);
}

void CLPoint::bas()
{
	if (this->getY() - 1 >= 0)
	{
		this->setY(this->getY() - 1);
	}
}

double CLPoint::getX() const
{
	return this->x;
}

void CLPoint::setX(double x)
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

double CLPoint::getY() const
{
	return this->y;
}

void CLPoint::setY(double y)
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


double CLPoint::getZ() const
{
	return z;
}

void CLPoint::setZ(double z)
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


void CLPoint::afficher() const
{
	cout << "Le point " << this << " a pour coordonnees :" << endl;
	cout << "(X = " << this->getX() << ")" << endl;
	cout << "(Y = " << this->getY() << ")" << endl;
}

double CLPoint::calculDistance(const CLPoint& point) const
{
	return sqrt(pow(point.getX() - this->getX(), 2) + pow(point.getY() - this->getY(), 2));
}
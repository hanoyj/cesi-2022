#include "CLPoint3D.h"

#include <iostream>
using namespace std;

CLPoint3D::CLPoint3D() : 
	CLPoint()
{
	this->initObj(0);
}

CLPoint3D::CLPoint3D(double x, double y, double z) :
	CLPoint(x, y)
{
	this->initObj(z);
}

CLPoint3D::CLPoint3D(const CLPoint& p) :
	CLPoint(p)
{
	this->initObj(p.getZ());
}

void CLPoint3D::initObj(double z)
{
	setZ(z);
}


void CLPoint3D::afficher() const
{
	CLPoint::afficher();
	cout << "(Z = " << this->getZ() << ")" << endl;
}

double CLPoint3D::calculDistance(const CLPoint& point) const
{
	return sqrt(pow(point.getX() - this->getX(), 2) + pow(point.getY() - this->getY(), 2) + +pow(point.getZ() - this->getZ(), 2));
}
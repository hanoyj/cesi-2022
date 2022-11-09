#include "Point3D.h"
#include <iostream>

using namespace std;

Point3D::Point3D() : 
	Point()
{
	this->initObj(0);
}

Point3D::Point3D(double x, double y, double z) :
	Point(x, y)
{
	this->initObj(z);
}

Point3D::Point3D(const Point& p) :
	Point(p)
{
	this->initObj(p.getZ());
}

void Point3D::initObj(double z)
{
	setZ(z);
}


void Point3D::afficher() const
{
	Point::afficher();
	cout << "(Z = " << this->getZ() << ")" << endl;
}

double Point3D::distance(const Point& point) const
{
	return sqrt(pow(point.getX() - this->getX(), 2) + pow(point.getY() - this->getY(), 2) + +pow(point.getZ() - this->getZ(), 2));
}
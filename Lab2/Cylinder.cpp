#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder()
{
	radius = 0.0;
}

Cylinder::~Cylinder()
{
}
void Cylinder::setRadius(double r)
{
	radius = r;
}
void Cylinder::setHeight(double h)
{
	 height = h;
}
double Cylinder::getRadius()
{
	return radius;
}

double Cylinder::calculateVolume()
{
	return 4 / 3 * pi * pow(radius, 4);
}
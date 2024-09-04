#include "Sphere.h"
#include <cmath>

Sphere::Sphere()
{
	radius = 0.0;
}

Sphere::~Sphere()
{
}
void Sphere::setRadius(double r)
{
	radius = r;
}
double Sphere::getRadius()
{
	return radius;
}

double Sphere::calculateVolume()
{
	return 4 / 3 * pi*pow(radius, 3);
}

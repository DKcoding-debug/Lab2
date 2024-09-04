

#include <iostream>
#include "Sphere.h"

int main()
{
	Sphere s;
	s.setRadius(5);
	std::cout << "The volume of the sphere is: " << s.calculateVolume() << std::endl;

	return 0;
}
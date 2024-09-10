/*
	Delvis Kouete
	Computer Science Fall 2024
	Due: Sept. 17, 2024
	Lab 2, Lab 2 Exploring Output and Classes
	This lab is designed to get you familiar output to the command prompt using C++.
	*/

#include <iostream>
#include "Sphere.h"

int main()
{
	Sphere s;
	s.setRadius(5);
	std::cout << "The volume of the sphere is: " << s.calculateVolume() << std::endl;

	return 0;
}
/*
	Delvis Kouete
	Computer Science Fall 2024
	Due: Sept. 17, 2024
	Lab 2, Lab 2 Exploring Output and Classes
	This lab is designed to get you familiar output to the command prompt using C++.
	*/

#include <iostream>
#include "Cylinder.h"

int main()
{
	Cylinder s;
	s.setRadius(3);
	s.setHeight(6);
	std::cout << "The volume of the Cylinder is: " << s.calculateVolume() << std::endl;

	return 0;
}
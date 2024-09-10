#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
	// Constructor and Destructor
	Cylinder();
	~Cylinder();

	//setters
	void setRadius(double r);
	void setHeight(double h);
	// Getters
	double getRadius();
	double calculateVolume();
private:
	double radius;
	double pi = 3.14159;
	double height;
};

#endif // !CYLINDER_H

#ifndef SPHERE_H
#define SPHERE_H

class Sphere
{
public:
	// Constructor and Destructor
	Sphere();
	~Sphere();

	//setters
	void setRadius(double r);

	// Getters
	double getRadius();
	double calculateVolume();
private:
	double radius;
	double pi = 3.14159;
};

#endif // !SPHERE_H
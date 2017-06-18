/////////////////////////////////
// Jalen Robinson-McClure
// CS 172
// JUNE 16TH, 2017
// EX 06_04
////////////////////////////////
#include <iostream>
#include "Circle.h"
using namespace std; 

int main()
{
	int Circle::numberOfObjects = 0;
	// construct a circle
	Circle::Circle()
	{
		radius = 1;
		numberOfobejects++;
	}

	Circle::Circle(double newRadius)
	{
		raidus = newRadius;
		numberofObjects++;
	}
	// rational area
	double Circle::getArea()+= const
	{
		return radius * radius * 3.14159;
	}

	double Circle::getRadius() const
	{
		return radius;
	}

	Void Circle::setRadius(double newRadius)
	{
		radius = (newRadius >= 0) ? newRadius : 0
	}

	int Circle::getNumberOfObjects()
	{
		return numberofObjects;
	}

	if (raius1 < radius2)
	{
		cout << "The radius of Circle 1 is greater then the radius of circle 2 ";
	}
	else
	{
		cout << "The radius of Circle 2 is greater then the radius of circle 1 ";
	}
}
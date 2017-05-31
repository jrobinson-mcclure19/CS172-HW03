#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

QuadraticEquation::QuadraticEquation()
{
	cout << "Enter the side lengths" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

}
// construct quadratic equation  
QuadraticEquation::QuadraticEquation(double newA)
{
	a = newA;
}

QuadraticEquation::QuadraticEquation(double newB)
{
	b = newB;
}

QuadraticEquation::QuadraticEquation(double newC)
{
	c = newC;
}

// return the dircriminant 
double QuadraticEquation::getDiscriminant()
{
	if (discriminant >= 0)
	{
		return discriminant = sqrt((b * b) - (4 * a * c));
	}
	else
	{
		return 0;
	}
}

// return the roots
double QuadraticEquation::getRoot1()
{
	return (-b + discriminant) / (2 * a);
}

double QuadraticEquation::getRoot2()
{
	return (-b - discriminant) / (2 * a);
}

double QuadraticEquation::getDiscriminant()
{
	return discriminant;
}

void QuadraticEquation::setA(double newA)
{
	a = (newA >= 0) ? newA : 0;
}

void QuadraticEquation::setA(double newB)
{
	b = (newB >= 0) ? newB : 0;
}

void QuadraticEquation::setA(double newC)
{
	c = (newC >= 0) ? newC : 0;
}
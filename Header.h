#include <iostream>
#include <cmath>
using namespace std;

// Define the class
class QuadraticEquation
{
public:
	
	// constructors
	QuadraticEquation();
	QuadraticEquation(double);
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
	void setA(double);
	void setB(double);
	void setC(double);


private:
	// data fields
	double a;
	double b;
	double c;
	double discriminant;

};
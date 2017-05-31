////////////////////////////
// Jalen Robinson-McClure
// May 30th, 2017
// CS 172
// EX03_02
/////////////////////////////

#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

int main()
{
	QuadraticEquation quadraticEquation1;
	cout << "The discriminant is " << quadraticEquation1.getDiscriminant() << endl;
	cout << "The roots are " << quadraticEquation1.getRoot1() << " and " << quadraticEquation1.getRoot2();

	return 0;
}


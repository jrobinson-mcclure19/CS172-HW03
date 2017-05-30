/////////////////////////////
// Jalen Robinson-McClure
// May 30th, 2017
// CS 172
// EX03_01
/////////////////////////////

#include <iostream>
using namespace std;

// EX03_01 THE FAN CLASS
class Fan // Declare the class
{
public:
	// Variables
	int speed;
	double radius;
	bool on;


	Fan()
		// set default speed, dimenions and off
	{
		speed = 2;
		radius = 5;
		on = false;
	}
	// turn fan on and off

	void On()
	{
		on = true;
	}
	void Off()
	{
		on = false;
	}

	// set speeds and radius
	void setSpeed(int newSpeed)
	{
		if (on && newSpeed >= 1 && newSpeed <= 3)
			speed = newSpeed;
	}
	void setRadius(double newRadius)
	{
		if (on && newRadius >= 1 && newRadius <= 15)
			radius = newRadius;
	}

	// change speeds
	void decreaseSpeed()
	{
		if (on && speed > 1)
			speed--;
	}

	void increaseSpeed()
	{
		if (on && speed < 4)
			speed++;
	}

	// change radius
	void increaseRadius()
	{
		if (on && radius < 1)
			radius++;
	}

	void decreaseRadius()
	{
		if (on && radius > 15)
			radius--;
	}

};

// main function that turns the fans on and tells the speed & radius;
int main()
{
	// Fan 1 functions
	Fan fan1;
	fan1.On();
	fan1.setSpeed(3);
	fan1.setRadius(10);

	// Fan 2 functions
	Fan fan2;
	fan2.On();
	fan2.decreaseRadius();
	fan2.decreaseSpeed();
	fan2.Off();

	// display the radius and the speed of the Fans
	cout << "Fan1's Speed is " << fan1.speed << " and Fan1's radius is " << fan1.radius << endl;

	cout << "Fan2's Speed is " << fan2.speed << " and Fan2's radius is " << fan2.radius << endl;

	return 0;
}
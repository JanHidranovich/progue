#include <iostream>
#include "Passenger.h"
//var3
using namespace std;

int main()
{
	Plane* plane = new Plane("cargo");
	Car* car = new Car;
	Train* train = new Train;
	cout << *plane;
	cin >> *plane;
	cout << *plane;
	delete plane;
	delete car;
	delete train;
	return 0;
}

#include <iostream>
#include "Passenger.h"
//var3
using namespace std;

int main()
{
	Plane* plane = new Plane("cargo");
	Car* car = new Car;
	Train* train = new Train;
	plane->showPass();
	plane->showType();
	plane->setType("Passenger");
	plane->showType();
	return 0;
}

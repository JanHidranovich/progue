#include "Passenger.h"

Passenger::Passenger()
{
	speed = 70;
	cost = 100;
	capacity = 20;
}
int Passenger::getCapacity()
{
	return capacity;
}
void Passenger::setSpeed(int sp)
{
	speed = sp;
}
int Passenger::getSpeed()
{
	return speed;
}
int Passenger::getCost()
{
	return cost;
}
int Passenger::countCost(int distance)
{
	return cost * distance;
}
void Passenger::showPass()
{
	cout << "Speed: " << speed << endl;
	cout << "Cost: " << cost << endl;
	cout << "Capacity: " << capacity << endl;
}
double Passenger::countTime(int distance)
{
	return distance / speed;
}


Plane::Plane()
{
	speed = 700;
	cost = 400;
	capacity = 120;
	type = "charter";
}
Plane::Plane(string t)
{
	speed = 700;
	cost = 400;
	capacity = 120;
	type = t;
}
string Plane::getType()
{
	return type;
}
bool Plane::checkCap(int cap)
{
	if (capacity >= cap)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Plane::setType(string t)
{
	type = t;
}
void Plane::showType()
{
	cout << type << endl;
}
ostream& operator<<(ostream& mystream, const Passenger& p)
{
	mystream << "Speed: " << p.speed << endl;
	mystream << "Cost: " << p.cost << endl;
	mystream << "Capacity: " << p.capacity << endl;
	return mystream;
}
istream& operator>> (istream& in, Passenger& p) {

	cout << "Enter speed: ";
	in >> p.speed;
	cout << "Enter cost: ";
	in >> p.cost;
	cout << "Enter capacity: ";
	in >> p.capacity;
	return in;
}

Car::Car()
{
	speed = 70;
	cost = 40;
	capacity = 18;
}
bool Car::checkCap(int cap)
{
	if (capacity >= cap)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Car::setSpeed(int sp)
{
	speed = sp;
}

Train::Train()
{
	speed = 100;
	cost = 100;
	capacity = 200;
	type = "fast";
}
int Train::countCost(int a, int b)
{
	return cost * abs(a - b);
}
void Train::setType(string t)
{
	type = t;
}

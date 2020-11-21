#pragma once
#include <iostream>
#include <string>
using namespace std;

class Passenger
{
protected:
	int speed;
	int cost;
	int capacity;
public:
	Passenger();
	void showPass();
	int getSpeed();
	int getCost();
	int getCapacity();
	void setSpeed(int);
	int countCost(int);
	double countTime(int);
	friend ostream& operator<<(ostream&, const Passenger&);
};

class Plane : public Passenger
{
private:
	string type;
public:
	Plane();
	Plane(string);
	bool checkCap(int);
	void setType(string);
	string getType();
	void showType();
};

class Car : public Passenger
{
public:
	Car();
	bool checkCap(int);
	void setSpeed(int);
};

class Train : public Passenger
{
private:
	string type;
public:
	Train();
	int countCost(int, int);
	void setType(string);
};

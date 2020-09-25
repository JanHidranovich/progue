#pragma once
#include <iostream>
#include <cstdio>
using namespace std;
class Aeroflot
{
private:
	int number;
	string end;
	char type;
	string time;
	int day;
public:
	Aeroflot();
	void print();
	int getNumber();
	string getEnd();
	char getType();
	string getTime();
	int getDay();
	void list_to_point(Aeroflot[], string, int);
	void list_by_date(Aeroflot[], int, int);
	void list_by_time(Aeroflot[], int, string ,int);
};



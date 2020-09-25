#include "Aeroflot.h"

Aeroflot::Aeroflot()
{
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter endpoint: ";
	cin >> end;
	cout << "Enter type: ";
	cin >> type;
	cout << "Enter time: ";
	cin >> time;
	cout << "Enter day: ";
	cin >> day;
}

void Aeroflot::print()
{
	cout << "Endpoint: " << end << " Number: " << number;
	switch (type)
	{
	case 'c':
		cout << " Type: Cargo";
		break;
	case 'p':
		cout << "Type: Passanger";
		break;
	}
	cout << " Time: " << time;
	switch (day)
	{
	case 1:
		cout << " Day: Monday";
		break;
	case 2:
		cout << " Day: Thuesday";
		break;
	case 3:
		cout << " Day: Wednesday";
		break;
	case 4:
		cout << " Day: Thursday";
		break;
	case 5:
		cout << " Day: Friday";
		break;
	case 6:
		cout << " Day: Saturday";
		break;
	case 7:
		cout << " Day: Sunday";
		break;
	}
}
int Aeroflot::getNumber()
{
	return number;
}
string Aeroflot::getEnd()
{
	return end;
}
char Aeroflot::getType()
{
	return type;
}
string Aeroflot::getTime()
{
	return time;
}
int Aeroflot::getDay()
{
	return day;
}
void Aeroflot::list_to_point(Aeroflot list[], string str, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i].getEnd() == str)
		{
			list[i].print();
		}
	}
}
void Aeroflot::list_by_date(Aeroflot list[], int p, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i].getDay() == p)
		{
			list[i].print();
		}
	}
}
void Aeroflot::list_by_time(Aeroflot list[], int p, string tim, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (list[i].getDay() == p && list[i].getTime() > tim)
		{
			list[i].print();
		}
	}
}


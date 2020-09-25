#include <iostream>
#include <fstream>
#include "Aeroflot.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	Aeroflot* mas = new Aeroflot[n];
	mas[0].list_by_date(mas, 3, n);
	mas[0].list_to_point(mas, "London", n);
	mas[0].list_by_time(mas, 1, "12:40", n);
	delete[] mas;
	return 0;
}

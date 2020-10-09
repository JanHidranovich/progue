#include <iostream>
#include "Polynom.h"

Polynom sum(Polynom* q, int p)
{
    Polynom r(p);
    for (int i = 0; i < p; i++)
    {
        r = r + *(q + i);
    }
    return r;
}

using namespace std;

int main()
{
    double mas1[] = { 1, 2, 1, 4 };
    Polynom* mas = new Polynom[3];
    for (int i = 0; i < 3; i++)
    {
        Polynom a(i + 1, mas1);
        *(mas + i) = a;
        cout << *(mas + i);
    }
    Polynom q = sum(mas, 3);
    cout << q;
    delete[] mas;
    return 0;
}

#include "Polynom.h"

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

Polynom::Polynom()
{
    deg = 1;
    coef = new double[1];
    coef[0] = 1;
}

Polynom::Polynom(int p)
{
    deg = p;
    coef = new double[deg + 1];
    for (int i = 0; i <= deg; i++)
    {
        coef[i] = 0;
    }
}

Polynom::Polynom(int p, double* mas)
{
    deg = p;
    coef = new double[deg + 1];
    for (int i = 0; i <= deg; i++)
    {
        coef[i] = mas[i];
    }
}

Polynom::Polynom(const Polynom& ex)
{
    deg = ex.deg;
    coef = new double[deg + 1];
    for (int i = 0; i <= deg; i++)
    {
        coef[i] = ex.coef[i];
    }
}

Polynom::~Polynom()
{
    delete[]coef;
}

double Polynom::calc(double p)
{
    double sum = 0;
    for (int i = 0; i <= deg; i++)
    {
        sum += pow(p, i) * coef[i];
    }
    return sum;
}

void Polynom::setCoef(int p, double k)
{
    this->coef[p] = k;
}

double Polynom::getCoef(int p)
{
    return this->coef[p];
}

void Polynom::setDeg(int p)
{
    this->deg = p;
}

int Polynom::getDeg()
{
    return this->deg;
}

Polynom operator+(Polynom a, Polynom b)
{
    Polynom c(max(a.getDeg(), b.getDeg()));
    for (int i = 0; i <= min(a.getDeg(), b.getDeg()); i++)
    {
        c.setCoef(i, a.getCoef(i) + b.getCoef(i));
    }
    if (max(a.getDeg(), b.getDeg()) == a.getDeg())
    {
        for (int i = min(a.getDeg(), b.getDeg()) + 1; i <= a.getDeg(); i++)
        {
            c.setCoef(i, a.getCoef(i));
        }
    }
    else
    {
        for (int i = min(a.getDeg(), b.getDeg()) + 1; i <= b.getDeg(); i++)
        {
            c.setCoef(i, b.getCoef(i));
        }
    }
    return c;
}
Polynom operator-(Polynom a, Polynom b)
{
    for (int i = 0; i < b.getDeg(); i++)
    {
        b.setCoef(i, -b.getCoef(i));
    }
    return a + b;
}

Polynom operator*(Polynom a, Polynom b)
{
    Polynom c(a.getDeg() + b.getDeg());
    for (int i = 0; i <= a.getDeg(); i++)
    {
        for (int j = 0; j <= b.getDeg(); j++)
        {
            c[i + j] += a[i] * b[j];
        }
    }
    return c;
}

ostream& operator<<(ostream& mystream, Polynom& p)
{
    mystream << p.getCoef(0);
    for (int i = 1; i <= p.getDeg(); i++)
    {
        mystream << " + " << p.getCoef(i) << "x^" << i;
    }
    mystream << endl;
    return mystream;
}

double& Polynom::operator[](int p)
{
    return coef[p];
}

Polynom& Polynom::operator++()
{
    this->coef[0]++;
    return *this;
}

Polynom& Polynom::operator--()
{
    this->coef[0]--;
    return *this;
}

Polynom& Polynom::operator=(const Polynom p)
{
    if (&p == this)
    {
        return *this;
    }
    deg = p.deg;
    coef = new double[deg + 1];
    for (int i = 0; i < deg + 1;i++)
    {
        coef[i] = p.coef[i];
    }
    return *this;
}
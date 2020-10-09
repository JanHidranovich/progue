#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

class Polynom {
private:
    int deg;
    double* coef;
public:
    Polynom();
    Polynom(int);
    Polynom(int, double*);
    Polynom(const Polynom&);
    ~Polynom();
    double calc(double);
    void setDeg(int);
    void setCoef(int, double);
    int getDeg();
    double getCoef(int);
    friend Polynom operator+(Polynom, Polynom);
    friend Polynom operator-(Polynom, Polynom);
    friend Polynom operator*(Polynom, Polynom);
    friend ostream& operator<<(ostream&, Polynom&);
    double& operator[](int);
    Polynom& operator++();
    Polynom& operator--();
    Polynom& operator=(const Polynom);
};

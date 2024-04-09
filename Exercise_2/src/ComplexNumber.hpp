#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;
namespace ComplexNumberLibrary{
struct ComplexNumber{
    double real;
    double imag;

    ComplexNumber(double a, double b):
        real(a),
        imag(b)
    {}


    ComplexNumber conjugate();


};
ostream& operator<<(ostream& os, const ComplexNumber &n);
ComplexNumber operator+(const ComplexNumber& num1, const ComplexNumber& num2);
bool operator==(const ComplexNumber& num1, const ComplexNumber& num2);

}
#endif

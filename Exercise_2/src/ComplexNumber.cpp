#include "ComplexNumber.hpp"
namespace ComplexNumberLibrary {

ComplexNumber ComplexNumber::conjugate() {
    return ComplexNumber(real, -imag);
}


ostream& operator<<(ostream& os, const ComplexNumber &n){
    os<<n.real<<showpos<<n.imag<<"i"<<noshowpos;
    return os;
}


ComplexNumber operator+(const ComplexNumber& num1, const ComplexNumber& num2)  {
    return ComplexNumber(num1.real + num2.real, num1.imag + num2.imag);
}

bool operator==(const ComplexNumber& num1, const ComplexNumber& num2) {
    return (num1.real == num2.real) && (num1.imag == num2.imag);
}

}

#include <iostream>
#include "src/ComplexNumber.hpp"

using namespace std;
using namespace ComplexNumberLibrary;


int main() {
    double a=6;
    double b=-3;
    ComplexNumber n(a,b);
    cout << "Primo numero complesso:" << n<<endl;

    double d=5;
    double e=-2;
    ComplexNumber m(d,e);

    cout << "Secondo numero complesso:"<<m << endl;



    ComplexNumber sum = n + m;
    ComplexNumber conjugate_n = n.conjugate();
    ComplexNumber conjugate_m = m.conjugate();


    cout << "Somma dei numeri complessi: ";
    cout << sum<<endl;

    cout << "Coniugato di n: ";

    cout <<conjugate_n<< endl;

    cout << "Coniugato di m: ";

    cout <<conjugate_m<< endl;

    cout << "Confronto: ";
    if (n == m)
        cout << "n e' uguale a m" << endl;
    else
        cout << "n e' diverso da m " << endl;

    return 0;
}

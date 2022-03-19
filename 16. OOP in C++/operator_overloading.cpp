#include<iostream>
using namespace std;

class Complex{
    int real, imag;
    public:
        Complex (int r = 0, int i = 0){ /* default values are zero */
            real = r;
            imag = i;
        }
        // friend operator to access private members (real and imag)
        friend Complex operator + (const Complex &obj1, const Complex &obj2){
            Complex res;
            res.real = obj1.real + obj2.real;
            res.imag = obj1.imag + obj2.imag;
            return res;
        }
        // friend operator to access private members (real and imag)
        friend ostream& operator << (ostream &os, const Complex &obj3){
            os<<obj3.real<<"+i"<<obj3.imag;
            return os;
        }
};

int main()
{
    Complex c1(3, 8), c2(2, 1);
    Complex c3 = c1 + c2;
    cout<<c3;
    return 0;
}
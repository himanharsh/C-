// Complex number addition using struct type function
#include<iostream>
using namespace std;

struct Complex
{
    int real;
    int img;
};

Complex add(Complex c1, Complex c2)
{ // function return type is struct, but it is not necessary to type struct
  // after first declaration
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

int main() 
{
    int real1, img1, real2, img2;
    cin>>real1>>img1>>real2>>img2;
    Complex c1, c2;
    c1.real = real1;
    c1.img = img1;
    c2.real = real2;
    c2.img = img2;

    Complex c3 = add(c1, c2); // function returns a struct, so datatype which stores it should also be a struct
    cout<<c3.real<<" + "<<c3.img<<"i"; 
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    float a = 10.5f; //float
    double b = 10.515; //double
    float c = 2.1e15f; // e is used for power of 10 (same as in a calculator)
    double d = 200.1e-80;
    double e = 0x1A.1p2;
    cout<<c<<endl
        <<d<<endl
        <<e<<endl;
    return 0;
}
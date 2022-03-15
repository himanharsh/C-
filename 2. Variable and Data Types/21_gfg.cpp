// C-style conversion
#include<iostream>
using namespace std;

int main()
{
    int x = 15, y = 2;
    double z1 = x/y;
    cout<<z1<<endl;
    double z2 = double(x)/y; // Explicit conversion
    cout<<z2;
    return 0;
}
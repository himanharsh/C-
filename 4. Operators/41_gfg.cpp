#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = x++; // y = x, x = x + 1
    int z = ++x; // x = x + 1, z = x
    cout<<x<<"\n"
        <<y<<"\n"   
        <<z;   
    return 0;
}
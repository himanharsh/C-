#include<iostream>
using namespace std;

int &fun() // return type is also referencing type
{
    static int x = 10; // if static is not used - warning: reference to local variable 'x' returned
    return x;
}

int main()
{
    int &y = fun();
    y = 20;
    cout<<fun();
    return 0;
}
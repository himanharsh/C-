#include<iostream>
using namespace std;

int *fun()
{
    int *ptr = new int;
    *ptr = 10;
    return ptr; // returns the address of the integer created dynamically
}

int main()
{
    int x,y;
    cout<<*fun();
    int *ptr = fun();
    delete ptr;
    return 0;
}
#include<iostream>
using namespace std;

int *fun() // function return type is pointer
{
    int a = 10;
    int *ptr = &a;
    return ptr;
}

int main()
{
    int x,y;
    cout<<*fun(); // *ptr = 10
    return 0;
}
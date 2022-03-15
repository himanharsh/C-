#include<iostream>
using namespace std;

void fun(int x){}
void fun(int *ptr){}
int main()
{
    // fun(main); // ambiguous call
    return 0;
}
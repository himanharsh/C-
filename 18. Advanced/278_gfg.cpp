#include<iostream>
using namespace std;

void fun(){cout<<"Gfg\n";}

int main()
{
    void (*fun_ptr)() = &fun; // & is optional
    fun_ptr();
    cout<<fun; // address of fun
    return 0;
}
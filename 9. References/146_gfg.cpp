#include<iostream>
using namespace std;

void fun(string &&s) // R value reference
{
    s = "Hi " + s; // referencing is used for making changes in the original value
    cout<<s; //  which cannot be done if we take just a normal string variable
}

int main()
{
    fun("user");
    return 0;
}
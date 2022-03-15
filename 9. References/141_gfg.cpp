#include<iostream>
using namespace std;

// void fun(int x)
// {
//     x = x+5; // returns 10
// }
void fun(int &x) // ampersand reference
{
    x = x+5;
}

int main()
{
    int x = 10;
    fun(x);
    cout<<x;
    return 0;
}
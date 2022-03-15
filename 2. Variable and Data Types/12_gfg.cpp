#include<iostream>
using namespace std;
int x = 20;
int main()
{
    int x = 10;
    {
        int x = 30; // new scope is created by a pair of curly brackets 
        // int x = 40; // same variable cannot be declared in the same scope
        cout<<x;
    }
    return 0;
}
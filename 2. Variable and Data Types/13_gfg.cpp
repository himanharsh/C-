#include<iostream>
using namespace std;

int main()
{
    static int x;
    cout<<x; // output: 0
    return 0;
}
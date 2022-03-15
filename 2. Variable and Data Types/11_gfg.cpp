#include<iostream>
using namespace std;
int x = 20;
int main()
{
    int x = 10; // local scope is given preference
    cout<<x; 
    return 0;
}
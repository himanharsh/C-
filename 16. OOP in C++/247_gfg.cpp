#include<iostream>
using namespace std;
int x; // Global
int main()
{
    int x = 10; // Local
    cout<<::x<<endl; // we use :: operator to access global variable with same name
    cout<<x;
    return 0;
}
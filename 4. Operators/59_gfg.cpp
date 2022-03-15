// Days before N days
#include<iostream>
using namespace std;

int main()
{
    int d = 0;
    int n = 9;

    int x = n%7;
    int ans = d-x;

    if (ans>=0)
    cout<<ans;
    else
    cout<<ans+7;
    return 0;
}
#include<iostream>
using namespace std;
extern int x; // to access from outside the main function
// int x = 10;
int main()
{
    cout<<x;
    return 0;
}
int x = 10;
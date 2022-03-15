// ++/-- and +/- example
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr++;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr = ptr + 3;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr = ptr - 2;
    cout<<*ptr<<" "<<ptr<<"\n";
    return 0;
}
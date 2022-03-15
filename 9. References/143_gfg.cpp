#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};
    // for(int x:arr) // changes are not reflected in the original array as the changes
    //     x = x*2;  // are done in the copy of the array
    for(int &x:arr)
        x = x*2;
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}
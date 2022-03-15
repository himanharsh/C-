#include<iostream>
using namespace std;

int main()
{
    // static int a;
    // int b,c;
    
    int *ptr = new int[5];
    cout<<*(ptr+2);
    delete[] ptr; // [] is used to delete an array
    // ptr = NULL; // nothing happens if NULL is not used
    return 0;
}
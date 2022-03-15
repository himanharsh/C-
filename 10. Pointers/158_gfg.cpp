#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int *p1 = arr;
    int (*p2)[7] = &arr; // array of pointers of size 7
    cout<<*p1<<"\n";
    cout<<**p2<<"\n";
    return 0;
}
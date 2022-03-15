#include<iostream>
using namespace std;

int main()
{
    // int* ptr;
    // cout<<*ptr; // garbage value

    int* ptr = NULL;
    if (ptr != NULL)
        cout<<*ptr;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};
    int *ptr = arr;
    cout<<sizeof(arr)<<"\n";
    cout<<sizeof(ptr)<<"\n";
    cout<<*(arr + 2)<<"\n";
    cout<<ptr[2]<<"\n";

    // recommended for readability
    cout<<arr[2]<<"\n";
    cout<<*(ptr + 2);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {10,5,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    // copying the array to the vector
    vector<int>v(arr, arr+n);// first address and just after last address

    for(auto it = v.rbegin(); it!= v.rend(); it++) // r for reverse
        cout<<(*it)<<" ";
    return 0;
}
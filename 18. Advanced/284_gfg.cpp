// #include<iostream>
// #include<cstdlib>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,-20,5,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    auto myCmp = [](int a, int b){return abs(a) < abs(b);};
    sort(arr, arr+n, myCmp);

    for (auto x: arr)
        cout<<x<<" ";
    return 0;
}
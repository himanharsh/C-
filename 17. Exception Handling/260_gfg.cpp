#include<iostream>
using namespace std;

int average(int arr[], int n)
{
    if (n==0)
        throw string ("Array size is Zero.");
    
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum += sum + arr[i];
    return sum/n;
}

int main()
{
    int arr[] = {4,5,2};
    int n = 0;

    try{
        int res = average(arr,n);
        cout<<res;
    }
    catch(string &e){cout<<e;}
    cout<<"\nBye";
    return 0;
}
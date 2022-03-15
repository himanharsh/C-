// average of an array
#include<iostream>
using namespace std;

double avg(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum = sum+arr[i];
    return double(sum)/n;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    double average = avg(arr,n);
    cout<<average;
    return 0;
}
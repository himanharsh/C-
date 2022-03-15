// Count Distinct elements in an array
#include<iostream>
using namespace std;

int count_distinct(int arr[], int n)
{
    int count = 0;
    bool isDistinct = true;

    for(int i = 0; i<n; i++)
    {
        isDistinct = true;
        for(int j = i-1; j>=0; j--)
        { // for i=0, loop will not execute, and isDistince = true, since first element is unique
            if (arr[i]==arr[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct == true)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++)
        cin>>arr[i];
    cout<<"There are "<<count_distinct(arr,n)<<" unique elements";
    return 0;
}
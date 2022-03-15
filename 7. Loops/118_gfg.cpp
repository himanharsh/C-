#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n==0 or n==1)
    {
        cout<<"Neither Prime nor Composite";
        return 0;// return stops the entire function (here, main), whereas 
        // break stops a loop
    }
    int i = 2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"No";
            return 0;
        }
        i++;
    }
    cout<<"Yes";
    return 0;
}
#include<iostream>
using namespace std;
int nextPrime(int n)
{
    n++;
    while(true)
    {
        int i;
        for(i = 2; i<n; i++)
        {
            if(n%i==0)
            break; // the loop will break here and move to n++ below
        }
        if(i==n)
        return n;
        n++;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<nextPrime(n);
    return 0;
}
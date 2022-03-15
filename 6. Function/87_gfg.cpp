#include<iostream>
using namespace std;
int find_first_digit(int n)
{
    while (n>=10)
    {
        n /= 10;
    }
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<find_first_digit(n);
    return 0;
}
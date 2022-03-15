#include<iostream>
#include<cmath>
using namespace std;

void binary_to_decimal(string s)
{
    int ans = 0;
    int n = s.length();
    for(int i = 0; i<s.length(); i++) // can't use n here coz it's decrementing
    {
        if(s[i] == '1')
        {
            ans = ans + pow(2,(n-1));
        }
        n--;
    }
    cout<<ans;
}

int main()
{
    string s;
    cin>>s;
    binary_to_decimal(s);
    return 0;
}
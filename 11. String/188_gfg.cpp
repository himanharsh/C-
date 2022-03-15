// find one extra character
// Method 3 (Using Bitwise XOR)
#include<iostream>
using namespace std;

char findExtra(const string &s1, const string &s2) // to increase efficiency
{
    int n = s1.length();
    int res = 0;
    for(int i = 0; i<n; i++)
    {
        res = res^s1[i]^s2[i];
    } // XOR of zero with extra character will return the extra character
    res = res^s2[n];
    return char(res);
}   

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<findExtra(s1,s2);
    return 0;
}
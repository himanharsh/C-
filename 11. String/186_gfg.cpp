// find one extra character
// Method 1 (Sorting)
#include<bits/stdc++.h>
using namespace std;

char findExtra(string s1, string s2)
{
    sort(s1.begin(), s1.end()); // STL
    sort(s2.begin(), s2.end()); // STL

    int n = s1.length();
    for(int i = 0; i<n; i++)
    {
        if(s1[i] != s2[i])
            return s2[i];
    }
    return s2[n];
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<findExtra(s1, s2);
    return 0;
}
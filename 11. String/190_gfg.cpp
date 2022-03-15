// Check for Anagram
// Method 2 (Sorting)
#include<bits/stdc++.h>
using namespace std;

bool anagram(string &s1, string &s2) // can't use const here bcoz sort method is 
{                                    //going to make changes to the string
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i = 0; i<n1; i++)
    {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagram(s1,s2);
    return 0;
}
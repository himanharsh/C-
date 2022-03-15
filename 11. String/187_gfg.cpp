// find one extra character
// Method 2 (Use Counting)
#include<iostream>
using namespace std;

char findExtra(const string &s1, const string &s2) // to increase efficiency
{
    int count[256] = {0}; // there are 256 ascii characters
    for(char x:s2)
        count[x]++; // using character ascii values as indexes
    for(char x:s1)
        count[x]--;
    for (int i = 0; i < 256; i++)
    {
        if(count[i] == 1)
            return char(i);
    }
    return 0; // necessary to end the function
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<findExtra(s1,s2);
    return 0;
}
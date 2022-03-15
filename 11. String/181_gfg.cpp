// Reversing a string
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string newstring = "";
    int l = s.length()-1;

    while(l>=0)
    {
        newstring = newstring + s[l];
        l--;
    }
    cout<<newstring;
    return 0;
}
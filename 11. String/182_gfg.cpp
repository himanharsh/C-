// Check for Palindrome
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int start = 0;
    int end = s.length()-1;

    while (start<end)
    {
        if(s[start] != s[end])
        {
            cout<<"No";
            return 0; // to return the program here itself
        }
        else
        {
            start++;
            end--;
        }
    }
    cout<<"Yes";
    return 0;
}
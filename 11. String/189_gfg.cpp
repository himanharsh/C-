// Pangram Checking
#include<iostream>
using namespace std;

bool isPangram(string s)
{
    int n = s.length();
        if(n<26)
            return false;
    bool visited[26] = {false}; // all initialized to false
    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        if(x>='a' && x<='z')
            visited[x-'a'] = true; // for small letters
        if(x>='A' and x<='Z') // index 0 has both 'A' and 'a'
            visited[x-'A'] = true; // for capital letters
    } // small and capital letters are converted to same index
    for (int i = 0; i < 26; i++)
    {
        if(visited[i] == false)
            return false;
    }
    return true;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<isPangram(s); // 1 --> true, 2 --> false
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    string arr[] = {"geeksforgeeks","courses","cpp learning"};
    // for(string s:arr) // a copy is made
    //     cout<<s<<"\n"; 
    for(const string &s:arr) // Output is same but no copy is made
        cout<<s<<"\n"; 
    return 0;
}
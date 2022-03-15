#include<iostream>
using namespace std;

int main()
{
    string str = "gfg";

    for(int i = 0; i<str.length(); i++)
        cout<<str[i];
    cout<<endl;
    for(char x:str) // Range based loop
        cout<<x;
    cout<<endl;
    for(auto it = str.begin(); it != str.end(); it++) // STL
        cout<<(*it);
    return 0;
}
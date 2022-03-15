#include<iostream>
using namespace std;

// void fun(string &s)
// {
//     cout<<s;
// }

void fun(const string &s)
{
    cout<<s;
}

int main()
{
    fun("user"); // this is a literal, which cannot be passed directly with reference.

    // int &x = 3; // invalid
    // const int &x = 3; // valid
    // int &&x = 3; // valid

    // string &s = "gfg"; // invalid
    // const string &s = "gfg"; // valid
    // string &&s = "gfg"; // valid
    
    return 0;
}
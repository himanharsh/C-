#include<iostream>
using namespace std;

// void fun(string s)
// {
//     cout<<s;
// }

void fun(const string &s)
{
    cout<<s;
}

int main()
{
    string s = "geeksforgeeks courses";
    fun(s);
    return 0;
}
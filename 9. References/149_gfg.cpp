#include<iostream>
using namespace std;

int main()
{
    string s1 = "GFG ", s2 = "Courses";
    // string s3 = s1 + s2; // copy is created
    string &&s3 = s1 + s2; // result of expressions, that's why && is used (R value referencing)
    // s3 = "Welcome to " + s3;
    cout<<s3;
    // cout<<s1 + s2;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 3, x = 10;
    vector<int>v(n,x);
    // end() returns the address just after the last element
    for(auto it = v.begin(); it!= v.end(); it++) // third traversal method
        cout<<(*it)<<" "; // 'it' is not a keyword
    return 0;
}
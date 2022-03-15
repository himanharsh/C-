#include<iostream>
#include<vector>
using namespace std;

int main()
{   // resize demonstration
    vector<int>v {10,5,20,15};
    v.resize(3); // {10,5,20}
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    v.resize(5); // {10,5,20,0,0}
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    v.resize(8,100); // {10,5,20,0,0,100,100,100}
    // 100 is default value
    for(int x:v)
        cout<<x<<" ";
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    for(int i = 0; i<v.size(); i++) // first traversal method
        cout<<v[i]<<" ";

    cout<<endl;

    for(int x:v) // second traversal method
        cout<<x<<" ";

    cout<<endl;

    for(int &x:v)
        x = 6;

    for(int x:v)
        cout<<x<<" ";

    return 0;
}
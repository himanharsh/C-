// Separate Odd Even Numbers
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    vector<int>even;
    vector<int>odd;
    cin>>n;

    while (n--)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]%2 == 0)
            even.push_back(v[i]);
        else
            odd.push_back(v[i]);
    }
    for(auto x:odd)
        cout<<x<<" ";
    cout<<endl;
    for(auto x: even)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() // Erase demonstration
{
    vector<int>v {10, 5, 20, 15};
    v.erase(v.begin()); // will remove 10
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(), v.end()-1); // from v.begin() to v.end-2 (inclusive of start and exclusive of end)
    // v.end points to address just after the last element
    for(int x:v)
        cout<<x<<" ";
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() // clear and empty demonstration
{
    vector<int> v{10,5,20,15};
    v.clear(); // removes all elements of the vector
    cout<<v.size()<<" "<<v[2]<<" "; // but why v[index] is displayed?
    for (auto x: v)
        cout<<x<<" "; // no output
    if(v.empty() == true)
        cout<<"Empty";
    else
        cout<<"Not Empty";
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v{10,5,20,15};
    v.insert(v.begin(), 100); // {100, 10, 5, 20, 15};
    v.insert(v.begin()+2, 200); // {100, 10, 200, 5, 20, 15};
    v.insert(v.begin(), 2, 300); // {300, 300, 100, 10, 200, 5, 20, 15}
    vector<int>v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 2); // last one is not included (exclusive)
    // from v.begin() to v.begin() + 1
    for(int x:v)
        cout<<x<<" "; 
    cout<<endl;
    for(int x:v2)
        cout<<x<<" "; // 300 300
    return 0;
}
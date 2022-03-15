#include<iostream>
using namespace std;

int main()
{
    int x;
    double d;
    cout<<sizeof(x)<<"\n";
    cout<<sizeof(d)<<"\n";
    cout<<sizeof(10ll)<<"\n"; // ll suffix is for long long
    cout<<sizeof(10.5)<<"\n"; // by default, it is taken as double data type
    cout<<sizeof(10.5f)<<"\n"; // if f is added as suffix, it becomes float
    return 0;
}
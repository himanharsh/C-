#include<iostream>
using namespace std;

struct s1
{
    char c1;
    double d1;
    char c2;
};
struct s2
{
    char c1;
    char c2;
    double d1;
};


int main()
{
    cout<<sizeof(s1)<<" "
        <<sizeof(s2);
    return 0;
}
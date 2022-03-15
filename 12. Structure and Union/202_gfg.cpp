#include<iostream>
using namespace std;

struct s3
{
    double d1;
    char c1;
    char c2;
}__attribute__((packed));

int main()
{
    cout<<sizeof(s3);
    return 0;
}
#include<iostream>
using namespace std;

class Point
{
    public:
    int x;
    int y;
};

int main()
{
    Point p;
    p.x = 10;
    cout<<p.x;
    return 0;
}
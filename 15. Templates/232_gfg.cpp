#include<iostream>
using namespace std;

template<typename T>
struct Pair
{
    T x, y;
    Pair(T i, T j) // constructor
    {
        x = i;
        y = j;
    }
    T getfirst()
        {return x;}
    T getsecond()
        {return y;}
};

int main()
{
    Pair<int>p1(10,20);
    cout<<p1.getfirst()<<" "
        <<p1.getsecond();   
    return 0;
}
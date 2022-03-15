#include<iostream>
using namespace std;

class A
{
    public:
        void fun(); // only declaration
};
void A::fun()
{
    cout<<"fun() called";
}

int main()
{
    A a;
    a.fun();
    return 0;
}
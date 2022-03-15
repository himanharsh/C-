#include<iostream>
using namespace std;

class A{
    public:
        int x = 7;
};
class B: virtual public A {}; // virtual keyword solves this problem
class C: virtual public A {}; // virtual keyword solves this problem
class D: public B, public C{};

int main()
{
    D d; 
    cout<<d.x; // inheritting x from B as well as from C, two copies(ambiguous call)
    return 0;
}
#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void print(){cout<<"Base\n";}
};
class Derived: public Base
{
    public:
        void print(){cout<<"Derived\n";}
};

int main()
{
    Base b;
    Derived d;
    b.print();
    d.print();
    Base *ptr = &d;
    // type of referred object is deciding the function to be called
    ptr->print();
    return 0;
}
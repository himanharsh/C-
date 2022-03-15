#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){cout<<"Base\n";}
};
class Derived: public Base{
    public:
        void print() override {cout<<"Derived\n";}
};// throws error if case-sensitive issue if present

int main()
{
    Base *b = new Derived();
    b -> print();
    return 0;
}
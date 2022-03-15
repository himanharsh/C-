// A copy constructor is a member function that initializes an object using another object of the same class.
// A copy constructor has the following general function prototype: 
// ClassName (const ClassName &old_obj);

#include<iostream>
using namespace std;
// with copy constructor
// deep copy
class Test
{
    int *ptr;
    public:
        Test(int x){ptr = new int(x);}
        Test(const Test &t)// no copy created (passed by reference)
        {//const is used as we don't want to change the passed object, we want'to change the object we are constructing
            int val = *(t.ptr);
            ptr = new int(val);
        }
        void set(int x){*ptr = x;}
        void print(){cout<<*ptr<<" ";}
};
int main()
{
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}
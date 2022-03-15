#include<iostream>
#include<memory>
using namespace std;

class Test{
    int x;
    public:
        Test (int a = 0){x = a; cout<<"Constructor\n";}
        ~Test (){cout<<"Destructor\n";}
        void fun(){cout<<x<<endl;}
};

int main()
{
    shared_ptr<Test>p1;
    {
        shared_ptr<Test>p2 = make_shared<Test>(10);
        p1 = p2;
    } // here p2 goes out of scope
    cout<<"Main ends\n";
    //destructor is called after both p2 and p1 go out of scope bcoz they have reference to the same memory
    return 0;
}
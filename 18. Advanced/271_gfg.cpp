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
    unique_ptr<Test>ptr1 = make_unique<Test>(10);
    unique_ptr<Test>ptr2 = move(ptr1);
    return 0;
}
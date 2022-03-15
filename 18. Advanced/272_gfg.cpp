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
    shared_ptr<Test>ptr1 = make_shared<Test>(10);
    shared_ptr<Test>ptr2 = ptr1;
    cout<<ptr1.use_count()<<endl;
    cout<<ptr2.use_count()<<endl;
    return 0;
}
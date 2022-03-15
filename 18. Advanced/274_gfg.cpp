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
    weak_ptr<Test>p1;
    {
        shared_ptr<Test>p2 = make_shared<Test>(10);
        p1 = p2;
        cout<<p1.use_count()<<endl;
    }
    cout<<"Main ends\n";
    cout<<p1.expired();
    return 0;
}
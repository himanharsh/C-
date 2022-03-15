#include<iostream>
using namespace std;
// without smart pointer
class Test{
    public:
        int x, y;
        Test(int a = 0, int b = 0){
            x = a;
            y = b;
            cout<<"Constructor called\n";
        }
        ~Test(){cout<<"Destructor called\n";}
};

int main()
{
    cout<<"Main begins\n";
    {
        Test *p = new Test(10,20);
    }
    cout<<"Main ends";
    return 0;
}
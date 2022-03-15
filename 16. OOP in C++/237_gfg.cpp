#include<iostream>
using namespace std;
// without Initializer List
class Test
{
    public:
        Test(){cout<<"Default\n";}
        Test(int x){cout<<"Parameterised\n";}
};
class Main
{
    Test t;
    public:
        Main(): t(10)
        {}
};

int main()
{
    Main m;
    return 0;
}
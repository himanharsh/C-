#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x = 1.23, y = 1122456.453;
    cout<<std::fixed;
    cout<<x<<"\n"  // 1.230000
        <<y<<"\n"; // 1122456.453000
    cout<<setprecision(2);
    cout<<x<<"\n" // 1.23
        <<y<<"\n"; // 1122456.45
    double z = 1.2e+7;
    cout<<z; // 120000000.00
    return 0;
}
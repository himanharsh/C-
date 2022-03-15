#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<std::setprecision(4);
    double x = 15.5638, y = 34267.1;
    cout<<x<<" "<<y<<"\n"; // 15.57 3.427e+04
    double z = 1.23;
    cout<<std::showpoint<<z<<"\n"; // 1.230
    cout<<showpos<<z<<"\n"; // +1.230
    cout<<uppercase<<y<<"\n"; // +3.427E+04
    return 0;
}
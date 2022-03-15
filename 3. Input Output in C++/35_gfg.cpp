#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 12;
    cout<<std::setw(5);
    cout<<setfill('*');
    cout<<a<<"\n"; // ***12
    cout<<setw(5); // setw is used each time
    cout<<"Hi"<<"\n"; // ***Hi
    cout<<left;
    cout<<setw(5);
    cout<<a<<"\n"; // 12***
    return 0;
}
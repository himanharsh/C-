#include<iostream>
using namespace std;

int main()
{
    int a = 26;
    cout<<std::showbase;
    cout<<oct;
    cout<<a<<"\n"; // 032
    cout<<hex;
    cout<<a<<"\n"; // 0x1a
    cout<<showpos;
    cout<<a<<"\n"; // +0x1a
    cout<<uppercase;
    cout<<a<<"\n"; // +0X1A
    return 0;
}
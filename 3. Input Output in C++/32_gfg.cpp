#include<iostream>
using namespace std;

int main()
{
    bool a = true;
    cout<<a<<"\n"; //1
    cout<<std::boolalpha; // std:: is just for demonstration, it is not required if namespace is used
    cout<<a<<"\n"; // true
    cout<<std::noboolalpha;
    cout<<a; //1
    return 0;
}
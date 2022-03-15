#include<iostream>
using namespace std;

void f1(){
    cout<<"f1 Begins\n";
    throw 100;
    cout<<"f1 Ends";
}
void f2(){
    cout<<"f2 Begins\n";
    f1();
    cout<<"f2 Ends\n";
}
void f3(){
    cout<<"f3 Begins\n";
    try{
        f2();
    }
    catch(int i){cout<<"Caught Exception\n";}
    cout<<"f3 Ends\n";
}

int main()
{
    f3();
    cout<<"Bye";
    return 0;
}
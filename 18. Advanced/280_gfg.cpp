#include<iostream>
using namespace std;

int add(int x, int y){return (x+y);}
int multiply(int x, int y){return (x*y);}
int compute(int x, int y, int (*fun_ptr)(int, int)){ // auto cannot be used in parameter declaration
    return fun_ptr(x,y);
}

int main()
{
    cout<<compute(10,20,add)<<"\n";
    cout<<compute(10,20,multiply)<<"\n";
    return 0;
}
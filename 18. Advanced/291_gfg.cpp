#include<iostream>
using namespace std;

int main()
{
    static int x = 5, y = 10; // static and global variables are always captured
    auto lambda_expr = [](int a){
        x = x + a;
        y = y + a;
    };

    lambda_expr(20);

    cout<<x<<" "<<y<<"\n";
    return 0;
}
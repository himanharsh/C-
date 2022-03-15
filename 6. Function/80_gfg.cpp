#include<iostream>
using namespace std;
inline int getMax(int x, int y) // Useful when we have small functions
{
    return (x>y)?x:y; // ternary operator
}
int main()
{
    cout<<getMax(10,20);
    return 0;
}
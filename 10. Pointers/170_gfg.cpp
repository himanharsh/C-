#include<iostream>
using namespace std;

void releaseConn(int *ptr)
{delete ptr;}

int *createConn()
{
    int *ptr = new int;
    return ptr;
}

int main()
{
    while(1)
    {
        int *ptr = createConn();
        releaseConn(ptr);
    }
    return 0;
}
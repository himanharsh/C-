/* A smart pointer is a wrapper class over a pointer with an operator like * and -> overloaded. The objects
of the smart pointer class look like normal pointers, but unlike normal pointers, they can deallocate and free
destroyed object memory. 
*/

#include<iostream>
using namespace std;

class SP{
    int *ptr;
    public:
        SP(int *p = NULL){ptr = p;}
        ~SP(){delete ptr;}
        int &operator *(){return *ptr;}
};

int main()
{
    SP sp(new int());
    *sp = 20;
    cout<<*sp;  
    return 0;
}
#include<iostream>
#include<exception>
using namespace std;

class MyException: public exception
{
    virtual const char *what() const throw()
    {
        return "Exception Occurred\n";
    }
};

int main()
{
    try{
        throw MyException();
    }
    catch(exception &e)
    {cout<<e.what();}
    return 0;
}
#include<iostream>
using namespace std;
class Employee;// declaration of this class before Printer class in necessary bcoz it's being used in printEmp
class Printer{
    public:
        void printEmp(const Employee &e); // only declaration
};
class Employee{
    int id;
    string name;
    public:
        friend class Printer;
        //Printer class will have access to private members of Employee (vice-versa) is not true
        Employee (int i, string n): id(i), name(n){}
};
void Printer::printEmp(const Employee &e)
{
    cout<<e.id<<" "<<e.name<<" ";
}

int main()
{
    Printer p;
    Employee e(101,"ABC");
    p.printEmp(e);   
    return 0;
}
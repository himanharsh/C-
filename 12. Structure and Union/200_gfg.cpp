#include<iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
    int age;
    string section;
};
// void print(Student &x) // using references, no copy is created
// {
//     cout<<x.rollNo<<" "
//         <<x.name<<" "
//         <<x.address<<" "
//         <<x.section<<" ";
// }

void print(Student *x) // using pointers, no copy is created
{
    cout<<x->name;
}

int main()
{
    Student x;
    x.rollNo = 100;
    x.name = "Himanshu";
    x.address = "Ranchi";
    x.section = "A";
    // print(x);
    print(&x);
    return 0;
}
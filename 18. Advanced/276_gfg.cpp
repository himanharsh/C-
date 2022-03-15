#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("test.txt", ios::app); // append mode

    fout<<"\nHello there\n";
    fout.close();
    return 0;
}
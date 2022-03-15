#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file_name;
    file_name.open("test2.txt", ios::out);

    if(file_name.is_open())
    {
        file_name<<"Hello World!\n";
        file_name.close();
    }

    file_name.open("test2.txt", ios::in);
    if (file_name.is_open()){
        string s;
        while (getline(file_name,s))
            cout<<s<<"\n";
        file_name.close();
    }
    return 0;
}
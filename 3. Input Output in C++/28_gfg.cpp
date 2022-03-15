#include<iostream>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin>>s1; // for taking a single word as input (same as scanf("%s") in C)
    // cin adds “\n” to the input buffer, same as in C
    // so to solve this we use cin.ignore() to clear the buffer (equivalent to scanf("\n") in C)
    cin.ignore();
    getline(cin,s2); // for taking multi word string as input (same as scanf(%[^\n]) in C)
    getline(cin,s3); 
    cout<<"Here are the strings entered by you:"<<endl;
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<"s3 = "<<s3<<endl;
    cout<<"The length of the s2 is "<<s2.length()<<endl; 
    // string.length() is used to find the length of a string
    cout<<"The first character of s1 is "<<s1.at(0)<<endl; 
    // string.at(index) is used to access individual characters of a string
    cout<<"The second character of s1 is "<<s1[1]<<endl;
    // string[index] is also used to access individual characters of a string, same as in python
    return 0;
}
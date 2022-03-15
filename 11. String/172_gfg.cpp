#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[] = "gfg";
    char s2[] = "abcd";
    int res = strcmp(s1,s2);
    cout<<res<<"\n";
    if(res == 0)
        cout<<"same";
    else if(res<0)
        cout<<"smaller";
    else
        cout<<"greater";
    return 0;
}
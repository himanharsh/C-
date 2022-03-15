// Decimal to Binary
#include<iostream>
using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];// 32 bits
    int i = 0;
    while(n>0)
    {
        binaryNum[i] = n%2;
        n = n/2;
        i++;
    }
    // cout<<i<<endl;
    // reversing the array
    for(int j = i-1; j>=0; j--)
    cout<<binaryNum[j];
}
int main()
{
    int n;
    cin>>n;
    decToBinary(n);
    return 0;
}
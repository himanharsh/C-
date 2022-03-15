// Matrix Multiplication of matrices with same or different number of rows and columns
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>r2>>c2;

    while (c1 != r2)
    {
        cout<<"Error! Please make sure the number of columns of first matrix is equal to number of rows of second matrix";
        cout<<"\nEnter the number of rows and columns of first matrix: ";
        cin>>r1>>c1;
        cout<<"Enter the number of rows and columns of second matrix: ";
        cin>>r2>>c2;
    }

    vector<vector<int>> mat1 (r1, vector<int>(c1,0));
    vector<vector<int>> mat2 (r2, vector<int>(c2,0));
    vector<vector<int>> res (r1, vector<int>(c2,0));
    
    cout<<"Enter mat1 elements\n";
    for(int i = 0; i<r1; i++)
    {
        for(int j = 0; j<c1; j++)
        {
            int t;
            cin>>t;
            mat1[i][j] = t;
        }
    }
    cout<<"Enter mat2 elements\n";
    for(int i = 0; i<r2; i++)
    {
        for(int j = 0; j<c2; j++)
        {
            int t;
            cin>>t;
            mat2[i][j] = t;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for(int j = 0; j<c2; j++)
        {
            res[i][j] = 0;
            for(int k = 0; k<c1; k++) // c1 or r2
                res[i][j] += mat1[i][k] * mat2[k][j]; // ikkj trick
        }
    }
    cout<<"\nThe product of mat1 and mat2 is:\n";
    for (int i = 0; i < r1; i++)
    {
        for(int j = 0; j<c2; j++)
            cout<<res[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
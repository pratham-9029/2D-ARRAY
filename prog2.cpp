#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cout<<"Enter Size of Row : ";
    cin >> row;

    cout << "Enter Size of Column : ";
    cin >> col;

    int arr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << "Enter Value of ["<< i <<"]["<< j <<"] ";
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    cout<<"The array is: ";
    cout<< endl;
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
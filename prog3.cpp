#include<iostream>
using namespace std;

int main()
{
    int row,col;
    int a[row][col];

    cout<<"Enter Size of Row : ";
    cin >> row;

    cout << "Enter Size of Column : ";
    cin >> col;

    cout<<"Enter Value of Matrix A";
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout <<"Enter Element ["<<i<<"]["<<j<<"] :" ;
            cin >> a[row][col];
        }
        cout << endl;
    }
    cout<< endl;

    cout<<"Matrix A";
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[row][col];
        }
        cout << endl;
    }
    cout<<endl;
    return 0;
}
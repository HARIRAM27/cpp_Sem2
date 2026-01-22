#include<iostream>
using namespace std;
int main()
{
    int rowsize, colsize;
    cout << "Enter number of rows: ";
    cin >> rowsize; 
    cout << "Enter number of columns: ";
    cin >> colsize;
    int arr[rowsize][colsize];
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < rowsize; i++)
    {
        for(int j = 0; j < colsize; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Original matrix is:"<<endl;
    for(int i = 0; i < rowsize; i++)
    {
        for(int j = 0; j < colsize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Rotated matrix is:"<<endl;
    for(int i = colsize - 1; i >= 0; i--)
    {
        for(int j = 0; j < rowsize; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
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
    cout <<"The matrix after interchanging first row and last row is:" << endl;
    for(int i = 0;i < colsize;i++)
    {
        int temp = arr[0][i];
        arr[0][i] = arr[rowsize - 1][i];
        arr[rowsize - 1][i] = temp;
    }
    for(int i = 0; i < rowsize; i++)
    {
        for(int j = 0; j < colsize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int rs,cs;
    cout<<"Enter no. of rows:";
    cin>>rs;
    cout<<"Enter no. of columns:";
    cin>>cs;
    int arr[rs][cs];
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < rs; i++)
    {
        for(int j = 0; j < cs; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Original matrix is:"<<endl;
    for(int i = 0; i < rs; i++)    
    {
        for(int j = 0; j < cs; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"The matrix after interchanging first column and last column is:" << endl;
    for(int i = 0;i < rs;i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][cs - 1];
        arr[i][cs - 1] = temp;
    }
    for(int i = 0; i < rs; i++)
    {
        for(int j = 0; j < cs; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
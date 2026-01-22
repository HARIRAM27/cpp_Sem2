#include<iostream>
using namespace std;
int main()
{
    int arr[6][6] = {
        {0,1,2,3,4,5},{1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8},{4,5,6,7,8,9},{5,6,7,8,9,10}
    };
    for(int i = 0;i < 6;i++)
    {
        for(int j = 0; j < 6 ;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
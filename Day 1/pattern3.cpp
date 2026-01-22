#include<iostream>
using namespace std;
int main()
{
/*
54321
4321
321
21
1
*/
int k = 5;
do{
    int l = k;
    do{
        cout<<l;
        l--;
    }while(l);
    cout<<endl;
    k--;
}while(k>0);
}
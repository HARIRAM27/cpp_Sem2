/*
0 10 20 
19 11 19
37 12 18
54 13 17*/
#include<iostream>
using namespace std;
int main()
{

    int c = 0;
    int a = 20;
    for(int i = 0;i<4;i++)
    {
        
            cout<<c<<" "<<10+i<<" "<<a<<endl;
            a = a - 1;
            c = c + a;
    }


}



#include<iostream>
using namespace std;
int main()
{
/*
    1
   21
  321
 4321
54321     
*/
int i = 1;
while(i <= 5)
{
    int space = 5 - i;
    while(space)
    {
        cout<<" ";
        space--;
    }
    int j = i;
    while(j)
    {
        cout<<j;
        j--;
    }
    cout<<endl;
    i++;
}
}

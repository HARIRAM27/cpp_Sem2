#include<iostream>
using namespace std;
bool prime_check(int n)
{
    if(n<=1)return false;
    if(n == 2)return true;
    
    for(int i = 3;i<=n/2;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
bool leap_year(int y)
{
    if(y%4==0 &&( y%100!=0 || y%400==0))return true;
    return false;
}
int fib(int N)
{
    if(N==0)return 0;
    if(N==1)return 1;
    return fib(N-1)+fib(N-2);
}
int main()
{
    int n;
    cin>>n;
    if(prime_check(n))cout<<"Prime\n";
    else cout<<"Not Prime\n";
    int y;
    cin>>y;
    if(leap_year(y))cout<<"Leap Year\n";
    else cout<<"Not Leap Year\n";
    int N;
    cin>>N;
    for(int i = 0; i<N;i++)
    {
    cout<<fib(i)<<" ";
    }
}

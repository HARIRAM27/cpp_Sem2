#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int n;
    cout<<"Enter a greeting word:"<<endl;
    getline(cin,str);
    cout<<"Enter number:";
    cin>>n;
    if(str.length() < n)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<str;
        }
    }
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int time;
    cout<<"Enter the traffic signal time in seconds:";  
    cin>>time;
    if(time>0)
    {
        if(time<=30)
        {
            cout<<"Red Light"<<endl;
        }
        else if(time>30&&time<=60)
        {
            cout<<"Yellow Light"<<endl;
        }
        else if(time>60&&time<=90)
        {
            cout<<"Green Light"<<endl;
        }
        else
        {
            cout<<"Invalid Time"<<endl;
        }
    }
    else
    {
        cout<<"Invalid Time"<<endl;
    }
}
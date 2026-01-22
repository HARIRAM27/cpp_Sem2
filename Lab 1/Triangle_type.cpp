#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"Enter the three sides of triangle:";
    cin>>s1>>s2>>s3;
    if(s1+s2>s3&&s1+s3>s2&&s2+s3>s1)
    {
        if(s1==s2&&s2==s3)
        {
            cout<<"It is a equilateral triangle";
        }
        else if(s1==s2||s1==s3||s2==s3)
        {
            cout<<"It is a isosceles triangle";
        }
        else
        {
            cout<<"It is a scalane triangle";
        }
    }
    else{
        cout<<"It is not a triangle";
    }

}

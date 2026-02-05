#include<iostream>
using namespace std;
int const MIN_AT = 75;
int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int count = 0;
    while(count < n)
    {
        cout<<"Enter marks for student "<<count+1<<": ";
        int marks;
        cin>>marks;
        cout<<"Enter attendance percentage for student "<<count+1<<": ";
        int attendance;
        cin>>attendance;
        char grade;
        if(marks >= 90)
            grade = 'A';
        else if(marks >= 80)
            grade = 'B';
        else if(marks >= 70)
            grade = 'C';
        else if(marks >= 60)
            grade = 'D';
        else if(marks >= 50)
            grade = 'E';
        else
            grade = 'F';

        cout<<"Grade: "<<grade<<endl;

        if(marks > 50)
        {
            if(attendance > MIN_AT)
                cout<<"Status: Promoted"<<endl;
            else
                cout<<"Status: Not Promoted due to low attendance"<<endl;
        }
        else
        {
            cout<<"Status: Not Promoted due to low marks"<<endl;
        }
        count++;
    }
    return 0;   
}
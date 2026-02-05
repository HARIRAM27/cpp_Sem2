#include<iostream>
#include<iomanip>
using namespace std;
#define MAX_MARKS 100
int main()
{
    short int roll = 45;
    int marks,tot = 0;
    long col_code = 202600123;
    char section = 'A';
    double avg,per;
    for(int i = 1; i<=5; i++)
    {
        cout<<"Enter mark of subject "<<i<<endl;
        cin>>marks;
        tot+=marks;

    }
   avg = tot/5;
   per = (tot/500.0)*100.0;
    cout<<setw(26)<<setfill('-')<<"Student Exam Report"<<setw(7)<<setfill('-')<<"\n";
    cout<<left<<setw(20)<<setfill(' ')<<"Student"<<":"<<roll<<endl;
    cout<<setw(20)<<setfill(' ')<<"college code"<<":"<<col_code<<endl;
    cout<<setw(20)<<setfill(' ')<<"Section"<<":"<<section<<endl;
    cout<<setw(20)<<setfill(' ')<<"Total marks"<<":"<<tot<<endl;
    cout<<setw(20)<<setfill(' ')<<"Average"<<":"<<fixed<<setprecision(2)<<avg<<endl;
    cout<<setw(20)<<setfill(' ')<<"Percentage"<<":"<<fixed<<setprecision(2)<<per<<"%"<<endl;
    cout<<setw(20)<<setfill(' ')<<"Pass Status:"<<":"<<(per>=40?"Pass":"Fail")<<endl;
    cout<<right<<setw(33)<<setfill('-')<<"\n";
    
}
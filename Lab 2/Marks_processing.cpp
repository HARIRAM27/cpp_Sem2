#include<iostream>
#include<iomanip>
const double W_T = 0.7;
using namespace std;
int main()
{
    int marks[5],tot = 0,pass_count = 0;
    double point,sports;
    bool pass,sch;
    char ch = 'Y';
    while(ch!='N')
    {
    cout<<"Enter marks for 5 subjects:";
    for(int i =0; i< 5; i++)
    {
        cin>>marks[i];
        tot += marks[i];
        if(marks[i] >= 35)
        {
            pass_count++;
        }
    }
    double avg = tot / 5.0;
    cout<<"Enter sports score out of 100: ";
    cin>>sports;
    point = avg*W_T;
    pass = (pass_count == 5);
    sch = (avg>85||sports>80);
    cout<<endl<<"----Student Report----"<<endl;
    cout<<"Total Marks: "<<tot<<endl;
    cout<<"Average Marks: "<<avg<<endl;
cout<<"Grade Points: "<<fixed<<setprecision(2)<<point<<endl;
cout<<"Result: "<<(pass ? "Pass" : "Fail")<<endl;
cout<<"Scholarship Eligibility: "<<(sch ? "Eligible" : "Not Eligible")<<endl;
cout<<"Want another student's details? (Y/N): ";
    cin>>ch;
    tot = 0;
    pass_count = 0;
    }
    return 0;

    
}

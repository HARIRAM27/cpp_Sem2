#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollno;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    cout<<"Student 1 details: "<<endl;
    s1.display();
    student s2 = s1;
    cout<<"Student 2 details (created using student 1 details): "<<endl;
    s2.display();
    student s3;
    s3.getdata();
    cout<<"Student 3 details: "<<endl;
    s3.display();
    s2 = s3; 
    cout<<"Student 2 details after replacing with student 3 details: "<<endl;
    s2.display();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    float marks;
public:
    student(string n, int r, float m){
        name = n;
        rollno = r;
        marks = m;
    }
    friend void displayDetails(student s);
    friend void adminDisplay(student s);
};
void displayDetails(student s){
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll number: "<<s.rollno<<endl;
}
void adminDisplay(student s)
{
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll number: "<<s.rollno<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}
int main(){
    student s1("Hari", 12345, 85.5);
    cout<<"Regular member function access: "<<endl;
    displayDetails(s1);
    cout<<"\nAuthorized administrative module access: "<<endl;
    adminDisplay(s1);
    return 0;
}
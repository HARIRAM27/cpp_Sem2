#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class lib
{
    public:
    string title,author;
    int price;
    void display()
    {
        cout<<left <<setw(20)<<setfill(' ')<<"Title"<<":"<<title<<endl;
        cout<<left <<setw(20)<<setfill(' ')<<"Author"<<":"<<author<<endl;
        cout<<left <<setw(20)<<setfill(' ')<<"Price"<<":"<<price<<endl;
    }

};
int main()
{
    lib l[3];
    for(int i = 0; i<3;i++)
    {
        cout<<"Enter title of book "<<i+1<<":"<<endl;
        getline(cin,l[i].title);
        cout<<"Enter author of book "<<i+1<<":"<<endl;
        getline(cin,l[i].author);
        cout<<"Enter price of book "<<i+1<<":"<<endl;
        cin>>l[i].price;
        cin.ignore();
    }
    for(int i = 0; i<3;i++)
    {
        l[i].display();
    }
    return 0;
}
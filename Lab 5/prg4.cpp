#include<iostream>
using namespace std;
class account{
    string name;
    int accno;
    float balance;
public:
    account(){
        cout<<"Default constructor called"<<endl;
    }
    account(string n, int a, float b){
        name = n;
        accno = a;
        balance = b;
        cout<<"Parameterized constructor called"<<endl;
    }
    account(const account &a){
        name = a.name;
        accno = a.accno;
        balance = a.balance;
        cout<<"Copy constructor called"<<endl;
    }
    ~account(){
        cout<<"Destructor called for account of "<<name<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    account a1("Hari", 12345, 1000.0);
    a1.display();
    account a2 = a1;
    a2.display();
    return 0;
}
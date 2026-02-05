#include<iostream>
using namespace std;
int main()
{
   
    double bal = 10000.0,d,w;
    int ch;
    int pin;
   
    int i = 3;
    while(i){
         cout<<"Enter Pin:";
    cin>>pin;
    if(pin == 1108){
        
    do{
       
        cout<<"\n  MENU  \n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\n";
         cout<<"Enter Choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter Deposit Amount:";
            cin>>d;
            bal+=d;
            cout<<"₹"<<d<<" Deposited Succesfully\n";
            break;
            case 2:
            cout<<"Enter Withdrawl Amount:";
            cin>>w;
            if(w<=bal){
            bal-=d;
            cout<<"₹"<<w<<" Debited Succesfully\n";}
            else cout<<"Insufficient Balance\n";
            break;
            case 3:
            cout<<"Available Balance is "<<bal<<endl;
            break;
            case 4:
            cout<<"Exitted...";
            break;
            default:
            cout<<"Invalid Choice!!!";
        }
    }while(ch!=4);
    break;
}
cout<<"Invalid Pin"<<endl;
i--;
cout<<"Attempts left "<<i<<endl;
}
    

}
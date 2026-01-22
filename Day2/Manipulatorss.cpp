#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter name:"<<endl;
    string name;
    getline(cin,name);
    cout<<"Enter register number:"<<endl;
    int n;
    cin>>n;
    cin.ignore();
    cout<<"Enter course:"<<endl;
    string c;
    getline( cin , c );
    float tufee,hosfee,totfee;
    cout<<"Enter tuition fee:"<<endl;
    cin>>tufee;
    cout<<"Enter hostel fee:"<<endl;
    cin>>hosfee;
    totfee=tufee+hosfee;

    cout<<setw(28)<<setfill('=')<<" STUDENT FEE RECEIPT "<<setw(8)<<"\n";
    
    cout<<setw(20)<<setfill(' ')<<left<<"Name"<<":"<<name<<endl;

    cout<<setw(20)<<setfill(' ')<<"Register Number"<<":"<<n<<endl;

    cout<<setw(20)<<setfill(' ')<<"Course"<<":"<<c<<endl;
    
    cout<<right<<setw(20)<<setfill('-')<<" FEE DETAILS "<<setw(16)<<"\n";

    cout<<left<<setw(20)<<setfill(' ')<<"Tuition Fee"<<":"<<fixed<<setprecision(2)<<showpos<<tufee<<endl;
    cout<<setw(20)<<setfill(' ')<<"Hostel Fee"<<":"<<fixed<<setprecision(2)<<showpos<<hosfee<<endl;
    cout<<setw(20)<<setfill(' ')<<"Total Fee"<<":"<<fixed<<setprecision(2)<<showpos<<totfee<<"\n";

    cout<<setw(20)<<setfill(' ')<<"Scholarship"<<":"<<boolalpha<<false<<endl;   

    cout<<right<<setw(28)<<setfill('-')<<"Register Number System"<<setw(9)<<"\n";
    cout<<left<<setw(20)<<setfill(' ')<<"Decimal"<<":"<<noshowpos<<dec<<n<<endl;
    cout<<setw(20)<<setfill(' ')<<"Octal"<<":"<<oct<<n<<endl;
    cout<<setw(20)<<setfill(' ')<<"Hexadecimal"<<":"<<hex<<uppercase<<n<<endl;
    cout<<setw(36)<<setfill('=')<<"\n";


    return 0;
}
#include<iostream>
#include<iomanip>
#define C_to_F(c) (c*9.0/5.0+32.0)
#define F_to_C(f) ((f-32.0)*5.0/9.0)
#define C_to_K(c) (c+273.15)
#define K_to_C(k) (k-273.15)
using namespace std;
int main()
{
    char choice;
    cout<<"Temperature Conversion Menu:\n";
    cout<<"a. Celsius to Fahrenheit\n";
    cout<<"b. Fahrenheit to Celsius\n";
    cout<<"c. Celsius to Kelvin\n";
    cout<<"d. Kelvin to Celsius\n";
    cout<<"Enter your choice (a/b/c/d): ";
    cin>>choice;
    double temp, converted_temp;
    switch(choice)
    {
        case 'a':
            cout<<"Enter temperature in Celsius: ";
            cin>>temp;
            converted_temp = C_to_F(temp);
            cout<<fixed<<setprecision(2)<<temp<<" °C = "<<converted_temp<<" °F"<<endl;
            break;
        case 'b':
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>temp;
            converted_temp = F_to_C(temp);
            cout<<fixed<<setprecision(2)<<temp<<" °F = "<<converted_temp<<" °C"<<endl;
            break;
        case 'c':
            cout<<"Enter temperature in Celsius: ";
            cin>>temp;
            converted_temp = C_to_K(temp);
            cout<<fixed<<setprecision(2)<<temp<<" °C = "<<converted_temp<<" K"<<endl;
            break;
        case 'd':
            cout<<"Enter temperature in Kelvin: ";
            cin>>temp;
            converted_temp = K_to_C(temp);
            cout<<fixed<<setprecision(2)<<temp<<" K = "<<converted_temp<<" °C"<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    return 0;
}
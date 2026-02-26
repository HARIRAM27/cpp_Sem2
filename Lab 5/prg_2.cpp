#include<iostream>
#include<iomanip>
using namespace std;
class cart{
    string product;
    int price;
    int quantity;
    int total = 0;
    public:
    void getdata(){
        cout<<"Enter the product name: ";
        cin>>product;
        cout<<"Enter the price: ";
        cin>>price;
        cout<<"Enter the quantity: ";
        cin>>quantity;
        total += price*quantity;
    }
    void display(){
        cout<<"Product"<<setw(10)<<"Price"<<endl;
        cout<<product<<setw(10)<<price*quantity<<endl;
        
    }
    void totalprice(){
        cout<<"Total price: "<<total<<endl;
    }
};
int main()
{
    cart c[3];
    for(int i = 0;i<3;i++){
        c[i].getdata();
    }
    for(int i = 0;i<3;i++)
    {
        c[i].display();
    }
    c[0].totalprice();
    return 0;
}
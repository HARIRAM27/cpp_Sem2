#include <iostream>
using namespace std;

inline double square(double x){ return x*x; }

double calculateBMI(double w,double h=1.0){ return w/square(h); }

long factorial(int n){ return (n<=1)?1:n*factorial(n-1); }

void incrementAll(int* arr,int n,int val){
    for(int i=0;i<n;i++) *(arr+i)+=val;
}

void incrementRef(int &x,int val=1){ x+=val; }

int main(){
    int ch,n=5,a[5],val,x=10; double w,h;
    do{
        cout<<"\n1.BMI 2.Fact 3.IncArray 4.IncRef 0.Exit\n";
        cin>>ch;
        switch(ch){
            case 1: cin>>w>>h; cout<<calculateBMI(w,h); break;
            case 2: cin>>n; cout<<factorial(n); break;
            case 3: for(int i=0;i<5;i++)cin>>a[i]; cin>>val;
                    incrementAll(a,5,val);
                    for(int i=0;i<5;i++)cout<<a[i]<<" "; break;
            case 4: incrementRef(x); cout<<x; break;
        }
    }while(ch);
}
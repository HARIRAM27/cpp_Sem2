#include <iostream>
using namespace std;
void byValue(int x){x+=10;cout<<"byValue="<<x<<"\n";}
void byReference(int& x){x+=10;}
void byPointer(int* x){*x+=10;}
void arrayParam(int arr[]){arr[0]+=10;cout<<"sizeof(*arr)="<<sizeof(*arr)<<"\n";}
int main(){
    int x,arr[3]; cin>>x;
    for(int i=0;i<3;i++)cin>>arr[i];
    cout<<"Orig x="<<x<<"\n";
    byValue(x); cout<<"After byValue x="<<x<<"\n";
    byReference(x); cout<<"After byRef x="<<x<<"\n";
    byPointer(&x); cout<<"After byPtr x="<<x<<"\n";
    cout<<"Orig arr[0]="<<arr[0]<<"\n";
    arrayParam(arr);
    cout<<"Mod arr[0]="<<arr[0]<<"\n";
}
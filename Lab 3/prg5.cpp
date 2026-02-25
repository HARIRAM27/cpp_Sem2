#include <iostream>
using namespace std;

void swapIntegers(void* a, void* b){
    int* x = static_cast<int*>(a);
    int* y = static_cast<int*>(b);
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int a,b,arr[5];
    cin>>a>>b;

    cout<<"Before "<<a<<" "<<b<<"\n";
    swapIntegers(&a,&b);
    cout<<"After "<<a<<" "<<b<<"\n";

    for(int i=0;i<5;i++) cin>>arr[i];

    int* ptr = arr;
    cout<<"Second element "<<*(ptr+1)<<"\n";

    cout<<"Before "<<arr[0]<<" "<<arr[4]<<"\n";
    swapIntegers(ptr,ptr+4);
    cout<<"After "<<arr[0]<<" "<<arr[4]<<"\n";

    swapIntegers(ptr+1,ptr+3);
    cout<<"Offset swap "<<arr[1]<<" "<<arr[3];
}
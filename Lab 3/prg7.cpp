#include <iostream>
#include <cmath>
using namespace std;

int* createDynamicArray(int n){ return new int[n]; }

void resizeArray(int*& arr,int oldN,int newN){
    int* temp=new int[newN];
    for(int i=0;i<oldN;i++) temp[i]=arr[i];
    delete[] arr; arr=temp;
}

double computeStats(int* arr,int n){
    double sum=0,mean,sd=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    mean=sum/n;
    for(int i=0;i<n;i++) sd+=(arr[i]-mean)*(arr[i]-mean);
    cout<<"Mean="<<mean<<" SD="<<sqrt(sd/n)<<endl;
    return mean;
}

void freeArray(int* arr){ delete[] arr; }

int main(){
    int n=5;
    int* arr=createDynamicArray(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    computeStats(arr,n);

    resizeArray(arr,n,10);
    for(int i=n;i<10;i++) arr[i]=0;

    cout<<"Array: ";
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";

    freeArray(arr);
}
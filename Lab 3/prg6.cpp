#include <iostream>
using namespace std;

int arraySum(int* arr,int n){
    int s=0; for(int i=0;i<n;i++) s+=*(arr+i); return s;
}

int binarySearch(int* arr,int n,int key){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(*(arr+m)==key) return m;
        else if(*(arr+m)<key) l=m+1;
        else r=m-1;
    }
    return -1;
}

void reverseArray(int* arr,int n){
    for(int i=0;i<n/2;i++){
        int t=*(arr+i);
        *(arr+i)=*(arr+n-1-i);
        *(arr+n-1-i)=t;
    }
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>key;

    cout<<"Sum="<<arraySum(arr,n)<<endl;
    cout<<"Search="<<binarySearch(arr,n,key)<<endl;

    reverseArray(arr,n);
    cout<<"Reversed: ";
    for(int i=0;i<n;i++) cout<<*(arr+i)<<" ";
}
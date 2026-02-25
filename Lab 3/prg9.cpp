#include <iostream>
#include <cstring>
using namespace std;

void sortStudents(char** n,int c){
    for(int i=0;i<c-1;i++)
        for(int j=0;j<c-1-i;j++)
            if(strcmp(n[j],n[j+1])>0){
                char* t=n[j]; n[j]=n[j+1]; n[j+1]=t;
            }
}

int findStudent(char** n,int c,char* s){
    for(int i=0;i<c;i++) if(strcmp(n[i],s)==0) return i;
    return -1;
}

int main(){
    char* students[25], search[30];
    int n=8;

    for(int i=0;i<n;i++){
        students[i]=new char[30];
        cin>>students[i];
    }

    sortStudents(students,n);

    cout<<"Sorted:\n";
    for(int i=0;i<n;i++) cout<<students[i]<<" ";

    cin>>search;
    cout<<"Position="<<findStudent(students,n,search)<<endl;

    for(int i=0;i<n;i++) delete[] students[i];
}
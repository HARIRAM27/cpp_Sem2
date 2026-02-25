#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    getline(cin,name);

    string id=name.substr(0,2);
    for(int i=0;i<4;i++) cout<<id;
}
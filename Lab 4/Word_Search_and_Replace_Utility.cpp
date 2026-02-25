#include <iostream>
#include <string>
using namespace std;

int main(){
    string para,word,rep;
    getline(cin,para);
    cin>>word>>rep;

    size_t pos;
    while((pos=para.find(word))!=string::npos)
        para.replace(pos,word.length(),rep);

    cout<<para;
}
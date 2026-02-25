#include <iostream>
#include <string>
using namespace std;

int main(){
    string author,topic;
    getline(cin,author);
    getline(cin,topic);

    string id=author.substr(0,3)+topic.substr(0,3)+to_string(topic.length());
    cout<<"Post ID: "<<id;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s,temp="";
    getline(cin,s);

    for(char c:s)
        if(isalnum(c)) temp+=tolower(c);

    string rev=temp;
    reverse(rev.begin(),rev.end());

    cout<<(temp==rev?"Palindrome":"Not Palindrome");
}
#include <iostream>
using namespace std;
int main(){
int ch; double a,b;
do{
cout<<"\n1+ 2- 3* 4/ 5% 6Rel 7Log 8Bit 9Even/Odd 10Fact 0Exit\n";
cin>>ch; if(!ch)break; cin>>a>>b;
switch(ch){
case 1:cout<<a+b;break;
case 2:cout<<a-b;break;
case 3:cout<<a*b;break;
case 4:cout<<a/b;break;
case 5:cout<<(int)a%(int)b;break;
case 6:cout<<(a==b)<<" "<<(a!=b);break;
case 7:cout<<(a>b&&b>0)<<" "<<(a>b||b>0)<<" "<<!(a>b);break;
case 8:cout<<((int)a&(int)b)<<" "<<((int)a|(int)b)<<" "<<((int)a^(int)b)<<" "<<((int)a<<1)<<" "<<((int)b>>1);break;
case 9:cout<<((int)a%2?"Odd":"Even");break;
case 10:{int f=1;for(int i=1;i<=a;i++)f*=i;cout<<f;}
}
}while(1);
}
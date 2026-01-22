#include<iostream>
using namespace std;
int main()
{
    int num, i;
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"Guess the number between 1 to 100"<<endl;
    cout<<"Enter a number to guess:";
    cin>>num;
    for( i =1 ; num!=59 ;i++)
    {
        if(num<59)
        {
            cout<<"Too Low! Try again"<<endl;
            cout<<"Enter a number to guess:";
            cin>>num;
        }
        else if(num>59)
        {
            cout<<"Too High! Try again"<<endl;
            cout<<"Enter a number to guess:";
            cin>>num;
        }
    }
    cout<<"Congratulations! You guessed the correct number 59 in "<<i<<" attempts."<<endl;

}
#include<iostream>
const double COMMISSION = 0.02;
using namespace std;
int main()
{
    double cash = 50000.0, portfolio_value = 0.0;
    for(int i=0; i<3; i++)
    {
        char type;
        int shares;
        double price;
        cout<<"Enter transaction "<<i+1<<" (B/S shares price): ";
        cin>>type>>shares>>price;
        double transaction_value = shares * price;
        if(type == 'B')
        {
            double cost = transaction_value * (1 + COMMISSION);
            cash -= cost;
            portfolio_value += transaction_value;
        }
        else if(type == 'S')
        {
            double revenue = transaction_value * (1 - COMMISSION);
            cash += revenue;
            portfolio_value -= transaction_value;
        }
    }
    double total_value = cash + portfolio_value;
    double profit_loss = total_value - 50000.0;
    double percent_change = (profit_loss / 50000.0) * 100.0;
    cout<<"\n----Portfolio Summary----"<<endl;
    cout<<"Cash Remaining: "<<cash<<endl;
    cout<<"Portfolio Value: "<<portfolio_value<<endl;
    cout<<"Total Value: "<<total_value<<endl;
    cout<<"Profit/Loss: "<<profit_loss<<" ("<<percent_change<<"%)"<<endl;
    cout<<"Recommendation: "<<(percent_change > 5.0 ? "Hold" : "Sell")<<endl;
    return 0;
    
}

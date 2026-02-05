
#include<iostream>
const double URGENT_THRESHOLD = 20.0;
using namespace std;
int main()
{
    int sales[7], total_sales = 0;
    cout<<"Enter sales for 7 days: ";
    for(int i=0; i<7; i++)
    {
        cin>>sales[i];
        total_sales += sales[i];
    }
    int ven;
    cout<<"Select vendor (1 - Fast,2 - Cheap):";
    cin>>ven;
    
    double avg_sales = total_sales / 7.0;
    if(avg_sales < URGENT_THRESHOLD)
    {
        cout<<"Stock is depleting fast. Urgent replenishment needed."<<endl;
        switch(ven)
        {
            case 1:
                cout<<"Vendor 1 (Fast) selected for urgent replenishment."<<endl;
                break;
            case 2:
                cout<<"Vendor 2 (Cheap) selected for urgent replenishment."<<endl;
                break;
            default:
                cout<<"Invalid vendor selection."<<endl;
        }
    }
    else
    {
        cout<<"Stock levels are stable. Regular monitoring continues."<<endl;
    }
    return 0;
}
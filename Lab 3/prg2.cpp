#include<iostream>
using namespace std;
const int REORDER_LEVEL=50;
int main()
{
    int current_stock;
    cin>>current_stock;
    bool low_stock = false;
    int total_quantity_processed = 0;
    
    for(int i=0; i<3; i++)
    {
        char item_type;
        int quantity;
        cin>>item_type>>quantity;
        
        switch(item_type)
        {
            case 'A':
                cout<<"Processing Electronics: ";
                break;
            case 'B':
                cout<<"Processing Clothing: ";
                break;
            case 'C':
                cout<<"Processing Groceries: ";
                break;
            default:
                cout<<"Invalid item type. Skipping transaction.\n";
                continue;
        }
        
        current_stock += quantity;
        total_quantity_processed += quantity;
        
        cout<<"Current Stock: "<<current_stock<<endl;
        
        if(current_stock < REORDER_LEVEL)
        {
            low_stock = true;
            cout<<"Low Stock Alert!\n";
        }
    }
    
    cout<<"Final Stock Level: "<<current_stock<<endl;
    cout<<"Low Stock Alert Status: "<<(low_stock ? "true" : "false")<<endl;
    cout<<"Total Quantity Processed: "<<total_quantity_processed<<endl;

    return 0;
}

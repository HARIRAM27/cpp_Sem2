#include <iostream>
using namespace std;

int main() {
    int timeOfDay, ambulanceStatus;
    cout << "Enter time (1=Morning, 2=Noon, 3=Night): ";
    cin >> timeOfDay;
    cout << "Ambulance? (1=yes, 0=no): ";
    cin >> ambulanceStatus;

    int greenTime, yellowTime = 5, redTime;

    if (timeOfDay == 1)      greenTime = 40, redTime = 20;
    else if (timeOfDay == 2) greenTime = 30, redTime = 25;
    else if (timeOfDay == 3) greenTime = 25, redTime = 30;
    else {
        cout << "Invalid input!";
        return 1;
    }

    for (int j = 1; j <= 4; j++) {
        cout << "\nJunction " << j << ":\n";
        for (int c = 1; c <= 10; c++) {
            if (ambulanceStatus)
                cout << "Cycle " << c << ": EMERGENCY - GREEN\n";
            else
                cout << "Cycle " << c << ": G=" << greenTime 
                     << "s Y=" << yellowTime 
                     << "s R=" << redTime << "s\n";
        }
    }
}

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double SIMPLE_RATE = 0.07;
const double COMPOUND_RATE = 0.08;
int main() {
    double principal, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter time in years: ";
    cin >> time;

    double simple_interest = principal * SIMPLE_RATE * time;
    double compound_interest = principal * (pow((1 + COMPOUND_RATE), time) - 1);

    cout << fixed << setprecision(2);
    cout << setw(20) << "Principal" << setw(20) << "Time (years)" 
         << setw(20) << "Simple Interest" << setw(20) << "Compound Interest" << endl;
    cout << setw(20) << principal << setw(20) << time 
         << setw(20) << simple_interest << setw(20) << compound_interest << endl;

    if (simple_interest > compound_interest) {
        cout << "Simple interest is greater." << endl;
    } else if (compound_interest > simple_interest) {
        cout << "Compound interest is greater." << endl;
    } else {
        cout << "Both interests are equal." << endl;
    }

    return 0;
}
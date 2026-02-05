#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const double BMI_UNDER = 18.5;
const double BMI_NORMAL = 24.9;
const double BMI_OVER = 29.9;

char assignGrade(int age, double bmi) {
    if (age < 30) {
        if (bmi < BMI_UNDER) return 'C';
        else if (bmi <= BMI_NORMAL) return 'A';
        else if (bmi <= BMI_OVER) return 'B';
        else return 'D';
    } else if (age < 50) {
        if (bmi < BMI_UNDER) return 'D';
        else if (bmi <= BMI_NORMAL) return 'B';
        else if (bmi <= BMI_OVER) return 'C';
        else return 'E';
    } else {
        if (bmi < BMI_UNDER) return 'E';
        else if (bmi <= BMI_NORMAL) return 'C';
        else if (bmi <= BMI_OVER) return 'D';
        else return 'F';
    }
}
int main() {
    double weight, height;
    int age;
    char gender;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;
    cout << "Enter age: ";      
    cin >> age;
    cout << "Enter gender (M/F): "; 
    cin >>
    gender;
    double bmi = weight / (height * height);
    char grade = assignGrade(age, bmi);
    bool isUnderweight = (bmi < BMI_UNDER);
    bool isNormal = (bmi >= BMI_UNDER && bmi <= BMI_NORMAL);
    bool isOverweight = (bmi > BMI_NORMAL && bmi <= BMI_OVER);  
    bool isObese = (bmi > BMI_OVER);
    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Status: " << endl;
    cout << " Underweight: " << (isUnderweight ? "Yes" : "No") << endl;
    cout << " Normal: " << (isNormal ? "Yes" : "No") << endl;
    cout << " Overweight: " << (isOverweight ? "Yes" : "No") << endl;
    cout << " Obese: " << (isObese ? "Yes" : "No") << endl;
    return 0;
}
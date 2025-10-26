//c++ program Employee Bonus Calculator
#include <iostream>
using namespace std;

int main(){
    int yearsOfservice;
    float salary, bonus;

    cout<<"Enter Years of service";
    cin>> yearsOfservice;

    cout<<"Enter Salary";
    cin>> salary;

     if (yearsOfservice >= 5) {
        if (salary > 50000) {
            bonus = salary * 0.10;  // 10% bonus for salary > 50,000
        } else {
            bonus = salary * 0.05;  // 5% bonus for salary <= 50,000
        }
        cout << "Bonus: " << bonus;
    } else {
        cout << "Not eligible for bonus";
    }

    return 0;
}
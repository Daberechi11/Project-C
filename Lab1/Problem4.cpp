//c++ Program Read age (years) and hasLicense (Y/N
#include <iostream>
using namespace std;

int main() {
    int age;
    char hasLicense;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a license (Y/N): ";
    cin >> hasLicense;

    if (age >= 18) {
        if (hasLicense == 'Y' || hasLicense == 'y') {
            cout << "You are eligible to drive.";
        } else {
            cout << "You need a valid license.";
        }
    } else {
        cout << "You are too young to drive.";
    }

    return 0;
}

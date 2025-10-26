//c++ program Password Attempt System
#include <iostream>
using namespace std;

int main() {
    string password;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> password;

        if (password == "cisco") {
            cout << "Access Granted";
            return 0;  // Exit the program after granting access
        } else {
            attempts--;
            if (attempts > 0) {
                cout << "Incorrect password. You have " << attempts << " attempt(s) left.";
            } else {
                cout << "Account Locked";
            }
        }
    }

    return 0;
}

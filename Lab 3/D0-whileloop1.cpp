//c++ program ask user to enter password until it correct
#include <iostream>
using namespace std;

int main() {
    string password;
    do {
        cout << "Enter password: ";
        cin >> password;
    } while (password != "cisco");

    cout << "Access Granted!";
    return 0;
}

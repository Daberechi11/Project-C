// c++ program  a menu program using a do-while loop so the menu appears at least once
#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Show a Number\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello!\n";
                break;
            case 2:
                cout << "Enter a number to show:\n ";
                int num;
                cin >> num;
                cout << "The number you entered is:\n " << num;
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

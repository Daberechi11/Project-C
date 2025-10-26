//c++ program validate input (0-100)
#include <iostream>
using namespace std;

int main() {
    int score;

    do {
        cout << "Enter a number (0-100): ";
        cin >> score;
    } while (score < 0 || score > 100);

    cout << "Valid input: " << score;
    return 0;
}

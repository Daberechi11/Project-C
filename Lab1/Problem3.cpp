// c++ prorgam for grade evaluation score 0-100
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "A";
    } else if (score >= 80 && score < 90) {
        cout << "B";
    } else if (score >= 70 && score < 80) {
        cout << "C";
    } else {
        cout << "Fail";
    }

    return 0;
}

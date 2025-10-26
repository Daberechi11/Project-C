//c++ program to print number 1 to N using recursion
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    printNumbers(N);
    return 0;
}

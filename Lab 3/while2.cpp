//c+++ program calculate the number of the first N nimber
#include <iostream>
using namespace std;

int main() {
    int N, i = 1, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    while (i <= N) {
        sum += i;
        i++;
    }

    cout << "Sum of first " << N << " numbers = " << sum;
    return 0;
}

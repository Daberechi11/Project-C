//c++ program Create an array of 5 integers, Input all 5 values, print them, and then calculate
#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

int main() {
    int arr[5];
    int sum = 0, min = INT_MAX, max = INT_MIN;

    // Input 5 values
    for (int i = 0; i < 5; i++) {
        cout << "Enter an integer: ";
        cin >> arr[i];
        sum += arr[i];

        // Update min and max
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    // Print all the values
    cout << "Entered values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculate and print sum, min, and max
    cout << "Sum: " << sum << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}

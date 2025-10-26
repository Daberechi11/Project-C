//c++ program Sum of Even Numbers

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    // Start from 2, and increment by 2 for even numbers
    for (int i = 2; i <= 50; i += 2) {  
        sum += i;
    }

    cout << "Sum of even numbers between 1 and 50: " << sum;

    return 0;
}

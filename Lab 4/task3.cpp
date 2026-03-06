//c++ program to print all even numbers from 2 to 20
#include <iostream>
using namespace std;

int main() {
    // Print even numbers from 2 to 20
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }

    cout << "\n";

    // Comment explaining why i++ would be inefficient or incorrect:
    // Using i++ would increment i by 1 on each iteration. This would print all numbers from 2 to 20,
    // not just the even numbers. By using i += 2, we increment i by 2, so we only get even numbers.
    
    return 0;
}

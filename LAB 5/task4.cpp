#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open the file
    ifstream file("lab5.txt");

    if (!file.is_open())
    {
        cout << "Error: Could not open lab5.txt" << endl;
        return 1;
    }

    // Variables to store the first 3 words
    string w1, w2, w3;

    // Read the first three words
    file >> w1 >> w2 >> w3;

    // Display them
    cout << "Word 1: " << w1 << endl;
    cout << "Word 2: " << w2 << endl;
    cout << "Word 3: " << w3 << endl;

    file.close();
    return 0;
}

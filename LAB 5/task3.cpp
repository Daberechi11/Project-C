#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open the file in read mode
    ifstream file("lab5.txt");
    string word;

    if (!file.is_open())
    {
        cout << "Error: Could not open lab5.txt" << endl;
        return 1;
    }

    // Read only the first word
    file >> word;

    cout << "First word: " << word << endl;

    file.close();
    return 0;
}

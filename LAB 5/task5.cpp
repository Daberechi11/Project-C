#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("lab5.txt");
    string line;

    if (!file.is_open())
    {
        cout << "Error: Could not open lab5.txt" << endl;
        return 1;
    }

    // Read the entire first line
    getline(file, line);

    // Print the line
    cout << "Line: " << line << endl;

    file.close();
    return 0;
}

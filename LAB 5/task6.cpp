#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("lab5.txt");
    string line;
    int count = 1;

    if (!file.is_open())
    {
        cout << "Error: Could not open lab5.txt" << endl;
        return 1;
    }

    // Read and print all lines with line numbers
    while (getline(file, line))
    {
        cout << "Line " << count << ": " << line << endl;
        count++;
    }

    file.close();
    return 0;
}

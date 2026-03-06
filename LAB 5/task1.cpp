#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create the file and write two lines
    ofstream file("lab5.txt");

    if (!file.is_open())
    {
        cout << "Error: Could not create lab5.txt" << endl;
        return 1;
    }

    file << "This is the C++ file handling lab.\n";
    file << "We are writing into a file using C++.\n";

    file.close();

    cout << "Task 1 completed: lab5.txt created and written successfully." << endl;

    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // Append mode (creates the file if missing)
    ofstream file("lab5.txt", ios::app);

    if (!file.is_open())
    {
        cout << "Error: Could not open lab5.txt" << endl;
        return 1;
    }

    file << "We will perform several file handling operations.\n";

    file.close();

    cout << "Task 2 completed: New line appended to lab5.txt successfully." << endl;

    return 0;
}
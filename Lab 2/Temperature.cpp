// c++ program that reads the current temperature in degree C
#include <iostream>
using namespace std;

int main() {
    int temp;
    cout<<"Enter temp";
    cin>> temp;

    // Check if the temperature is above 35 to trigger the heat alert
    if (temp > 35)
        cout<< "Heat Alert! Stay Hydrated";

    else
        cout<< "Normal temperature";
     return 0;
   
    
    


}

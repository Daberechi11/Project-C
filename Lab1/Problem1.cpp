// c+ Program Read a temperature in °F. If it’s greater than 100
#include <iostream>
using namespace std;

int main(){
    int temperture;
    cout<<"Enter temperture in °F";
    cin>> temperture;

    if (temperture > 100)
    cout<<"Warning: High temperature detected!";
   
    else
    cout<<"nothing (or a neutral message)";

    return 0;
    
}

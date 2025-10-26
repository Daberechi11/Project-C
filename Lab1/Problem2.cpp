//c++ Program read if number is even or odd
#include <iostream>
using namespace std;

int main(){
    int integer;
    cout<<"Enter a integer";
    cin>> integer;

    if(integer <=0)
    cout<<"Error integer are Natrual numbers";

    else if (integer % 2 ==0)
    {
        cout<<" Even number";
    }

    else
    cout<<"Odd number";


    return 0;
    
}
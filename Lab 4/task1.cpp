//c++ pragram task requires you to keep asking the user for a number between 1 and 10 until a valid number is entered.
#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number between 1 and 10: ";
    cin>> num;

    // Pre-test loop (while loop)
while (num< 1 || num > 10){
    
    cout<<" Invaild input. Please enter number between 1 to 10";
    cin>>num;
}

cout<<"Accepted";

return 0;

}
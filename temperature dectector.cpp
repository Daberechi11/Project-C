// c++ program Simulate a temperature detector
#include <iostream>
using namespace std;

int main(){
    int temp=7;

    if(temp < 0)
    cout<<"Freezing";
    
    else if ( temp >0&& temp<=25)
    {
        cout<<"Normal";
    }

    else if (temp >=26&& temp <=40)
    {
        cout<<"Hot";
    }

    else if (temp >40)
    {
        cout<<"Very Hot";
    }

    return 0;
    
    

}
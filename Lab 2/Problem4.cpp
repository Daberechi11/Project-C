//c++ program Water Quality Check
#include <iostream>
using namespace std;

int main(){
    int pH;
    cout<<"Enter pH ";
    cin>>pH;

    if(pH < 6)
    cout<<"Acidic Water";

    
    else if (pH>= 6 && pH<=8)
    {
   
        cout<<"Netural Water";

    }

    else
    cout<<" Alkaline Water";

    return 0;
    
}
// c++ Program that asks for marks (0–100) and assigns
#include <iostream>
using namespace std;

int main(){
    
    int marks;
    cout<<"Enter marks 0-100:";
    cin>>marks;

    if(marks > 100 || marks < 0)
    cout<<" Invalid marks. Please enter a value between 0 and 100.";
    else if (marks >=90&& marks <= 100)
    {
        cout<<" grade:A";
    }
    

    else if (marks >=80)
    {
        cout<<"grade:B";
    }
else if (marks >=70)
{
    cout<<"grade:C";
} 

else if (marks<70)
{
    cout<<"grade:F";
}



return 0;  
    

}
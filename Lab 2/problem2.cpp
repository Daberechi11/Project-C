// c++ program Ask the user to input their marks (0–100)
#include <iostream>
using namespace std;

int main(){
int marks;
cout<<"Enter Marks";
cin>> marks;

if (marks>=60)
cout<<"You passed";

else
cout<<"You failed,better luck next time";

return 0;


}
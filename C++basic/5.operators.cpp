#include <iostream>
using namespace std;

int main() {
    //Arthmetic Operators  +,-,*,/,%
    double a , b; // this way we can declara multiple variables at once

    // here  i am taking variable a and b as input from user you can manually declare it
    cout<<"Enter the value of first vaiable ";
    cin>>a;

    cout<<"Enter the value of second vaiable ";
    cin>>b;

    double sum = a+b;
    cout<<"the sum is "<<sum<<"\n";

    double subtract=a-b;
    cout<<"the subtract is "<<subtract<<"\n";

    double multiply= a*b;
    cout<<"the multiplication is "<<multiply<<"\n";

    double division = a/b;
    cout<<"the division is "<<division<<"\n";

    int x = a; //for moduler operator both the value has to be integer so i explicity cast it
    int y= b;
     double remainder= x % y;
     cout<<"the remainder is "<<remainder;

    return 0;
}
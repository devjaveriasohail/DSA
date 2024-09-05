#include <iostream>
using namespace std;

int main() {
    //Arthmetic Operators  +,-,*,/,%
    double a , b; // this way we can declara multiple variables at once

    // here  i am taking variable a and b as input from user you can manually declare it
    // here i am declaring variable type double so it will return me the decmial answer 
    //if your return type is integer only the value before the decmial will be printed
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
     cout<<"the remainder is "<<remainder<<"\n";

    //Relational operator >,<,>=,<=,==,!=
    // the only give the boolen value 0 for false 1 for true

       cout<<"> greater than "<<(6>9)<<"\n"; 
       cout<<"< less than "<<(6<9)<<"\n"; 
       cout<<">= greater than equal to "<<(6>=9)<<"\n"; 
       cout<<"<= less than equal to "<<(6<=6)<<"\n"; 
       cout<<"== equal to "<<(6==9)<<"\n"; 
       cout<<"!= equal to "<<(6!=9)<<"\n"; 

   //Logical operator  AND&& ,OR|| ,NOT! 
   // the only give the boolen value 0 for false 1 for true
     cout<<"AND "<<((6>9)&&(4<5))<<"\n"; 
       cout<<"OR "<<((6>9)||(4<5))<<"\n"; 
       cout<<"NOT "<<!((6>9)&&(4<5))<<"\n"; // it will give the reverse of and operation here


    return 0;
}
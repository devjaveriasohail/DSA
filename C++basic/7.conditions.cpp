#include <iostream>
using namespace std;

int main() {   //(uncomment or commrnt  the below session according to your need)

    //conditional statments
    //if case   
    int age;
    cout << "what is your age \n";
    cin>>age;
    if (age >=18){
        cout<<"you are adult \n";
    }

    //if else case
    //  int age;
    // cout << "what is your age \n";
    // cin>>age;
    if (age >=18){
        cout<<"you can get you driving license \n";
    } else {
        cout<<"you cannot have you driving license \n";
    }

       //if elseif case
     int percentage;
    cout << "what is your percentage \n";
    cin>>percentage;
    if (percentage >=90){
        cout<<"your grade is A \n";
    } else if (percentage <=90 && percentage >=80 ) {
        cout<<"your grade is B\n";
    } else if (percentage <=80 && percentage >=70 ) {
        cout<<"your grade is C\n";
    } else {
        cout<<"your grade is F \n";
    }    


//practice question find lowercase and upper case character
    char ch;
    cout << "Enter the letter \n";
    cin>>ch;
    if (ch >= 'A' && ch <= 'Z'){
        cout<<"the letter enter is Upper case \n";
    }  else if (ch >= 'a' && ch <= 'z' ) {
           cout<<"the letter enter is lower case \n";
     } else {
        cout<<"please enter alphbetic  character \n";
    }       

    // you can solve this same question using ascii values 
    // A=65 Z=90  a=97 z=122  

    //Ternary Statements 
    int n;
    cout<<"enter a number";
    cin>>n;
    n>=0?cout<<"the number is positive":cout<<"the number is negative"; 
    


    return 0;
}
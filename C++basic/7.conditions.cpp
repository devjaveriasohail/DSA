#include <iostream>
using namespace std;

int main() {  

    //conditional statments
    //if case   (uncomment the below part)
    // int age;
    // cout << "what is your age \n";
    // cin>>age;
    // if (age >=18){
    //     cout<<"you are adult \n";
    // }

    //if else case
     int age;
    cout << "what is your age \n";
    cin>>age;
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

   

    return 0;
}
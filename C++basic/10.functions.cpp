#include <iostream>
using namespace std;
    //function
    // returntype nameOfFunction(parameters){
              // block of code 
    //} 
void greeting(){                  
    cout<<"Hello, how are you?\n";  
}

// function with parameters
void greetingPerson(string name){
    cout<<"Hello "<<name;
    cout<<endl;
}

// function for sum of two numbers
int sum(int a,int b){   //here a and b are parametes
     int sum=a+b;
     return sum;
}

int main() {
     greeting();  // calling function
     greetingPerson("javeria");
     sum(9,8); // 8 ,9 are arguments
    
    return 0;
}
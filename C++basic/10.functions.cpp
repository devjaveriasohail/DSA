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

//min of 2 numbers
int min(int c, int d){
    int min =0;
    if (c>d){
       min= d;
    }else{
        min =c;
    }
  return min;
}

int main() {
     greeting();  // calling function

     greetingPerson("javeria");  // calling function with parameters

     cout<<sum(9,8)<<endl; // 8 ,9 are arguments

     int num1,num2;   // taking the number from user to find minium of two number
      cout<<"Enter the first number ";
      cin>>num1;
      cout<<"Enter the second number ";
      cin>>num2;
      int result =  min(num1,num2); // passing the value of num1 and num2 as arguments and storing the return answer in result variable
      // we can also directly print the answer as we did in sum function 
      cout<<"The minium of number is "<<result<<endl;
    
    return 0;
}
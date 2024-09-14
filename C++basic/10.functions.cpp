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

// sum of 1 to N values
int totalSum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
      sum += i;
    }
    return sum;
}

// sum of digits in given number
int sumDigits(int num){
    int digitSum=0;
    for(int i=1; num>0; i++){
        int lastdigit= num % 10;
        num = num /10;
    digitSum +=lastdigit;
    }
    return digitSum;
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

      int n;
      cout<<"Enter the a number ";
      cin>>n;
      cout<<"Sum from 1 to "<<n<<" number  is "<<totalSum(n)<<endl;

      // sum of digit
      int num;
      cout<<"Enter the a larger number ";
      cin>>num;
      cout<<"The Sum of digit of "<<num<<" number  is "<<sumDigits(num)<<endl;
    
    return 0;
}
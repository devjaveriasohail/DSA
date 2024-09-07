#include <iostream>
using namespace std;

int main() {
/*
    //While loop
    int count = 1;
    while (count <=10){
        cout<<count<<"  ";
        count ++;
    }

    // practice question
    //print the number until n value (here n value taken from user)
    int n;
    int i = 0;
    cout<<"Enter the number";
    cin>>n; 
    while (i <=n){
        cout<<i<<"  ";
        i ++;
    }
*/
/*
//doing the same task with for loop uncomment or comment the respective part/portion
// for loop  
   for(int i=1;i<=10;i++){
    cout<<i<<" \n";
   }

    // practice question
    //print the number until n value (here n value taken from user)
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for (int j=0;j<=n;j++){
        cout<<j<<" "; 
    }

// increasing count value by 2
    int num;
    cout<<"Enter the number ";
    cin>>num;
    for (int k=0;k<=n;k=k+2){
        cout<<k<<" "; 
     }
    
   
   // practice question 
   //sum from 1 till n
   int n;
   cout<<"Enter the number ";
   cin>>n;
     int sum=0;
   for(int i=1; i<=n;i++){
  
    sum=sum +i;
   }
   cout <<sum <<"" ;
    */

   // do while loop

   do {
    cout<<"this is do while loop\n"; // this code execute atleast one time

   } while(1>2);

   // print 1 to 10 number
//    int i=1;
//    do {
//     cout<<i<<" ";
//     i++;
//    }while(i<=10);

   // practice question 
   //sum from 1 till n
   int n;
   cout<<"Enter the number ";
   cin>>n;
     int sum=0;
     int i=0; //initizating iterative variable

     do {
       sum=sum +i;
       i++;    //incrementing count variable
     }while(i<=n);

   cout <<sum <<"" ;
    

    return 0;
}
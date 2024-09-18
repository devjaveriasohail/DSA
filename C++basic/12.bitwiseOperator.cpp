#include <iostream>
using namespace std;

int main() {
    // bitwise and &
    int andNum1;
    int andNum2;
    cout<<"Enter two number to calculate bitwise & \n" ;
    cout<<"Enter 1st number ";
    cin>>andNum1;

    cout<<"Enter 2nd number ";
    cin>>andNum2;

   int And= (andNum1 & andNum2);
    cout << "The bitwise & is "<<And;


    // bitwise or |
    int orNum1;
    int orNum2;
    cout<<"\nEnter two number to calculate bitwise OR \n" ;
    cout<<"Enter 1st number ";
    cin>>orNum1;

    cout<<"Enter 2nd number ";
    cin>>orNum2;
     
    int orNum = (orNum1 |orNum2);
    cout << "The bitwise | is "<<orNum;

    //bitwise xor ^
    int xorNum1;
    int xorNum2;
    cout<<"\nEnter two number to calculate bitwise XOR \n" ;
    cout<<"Enter 1st number ";
    cin>>xorNum1;

    cout<<"Enter 2nd number ";
    cin>>xorNum2;

    int xorNum = (xorNum1 ^ xorNum2);
    cout << "The bitwise ^ is "<<xorNum;

  // bitwise left shift operator <<
  int leftNum;
  int byNum;
    cout<<"\nEnter a number to leftShift and by \n" ;
    cout<<"Enter  number ";
    cin>>leftNum;

    cout<<"Enter how many places it left shifted ";
    cin>>byNum;
    cout << "the answer of leftShifted is "<<(leftNum<<byNum);

      // bitwise right shift operator >>
  int rightNum;
  int byNum2;
    cout<<"\nEnter a number to RightShift and by \n" ;
    cout<<"Enter  number ";
    cin>>rightNum;

    cout<<"Enter how many places it right shifted ";
    cin>>byNum2;
    cout << "the answer of leftShifted is "<<(rightNum>>byNum2);
    return 0;
}
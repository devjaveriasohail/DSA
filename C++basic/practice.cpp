#include <iostream>
using namespace std;
// reverse an integer
int reverseInt(int num){
    int answer;
    int remainder;
    int power=1;
  for(int i=1;num>0;i++){ 
  int remainder = num%10 ;
     num=num/10;     
    answer += (remainder *10);
    power *= 10;
  }
 return answer = remainder;
}

int main() {
    int num;
cout<<"Enter a number ";
cin>>num;
    cout <<"the reverse of integer is"<<reverseInt(num);
    return 0;
}
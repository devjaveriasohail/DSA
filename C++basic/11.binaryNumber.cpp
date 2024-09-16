#include <iostream>
using namespace std;

int deciToBinary(int deciNum){
    int ans =0 ;
    int pow=1;
    for(int i=1; deciNum>0; i++){
        int remain;
        remain = deciNum % 2;
        deciNum /= 2;
         
         ans += (remain*pow);
         pow *= 10;
    }
    return ans;
}

int main() {
    int deciNum;
    cout << "Enter a decimal number to convert to binary number ";
    cin>> deciNum; 
    cout<<"The binary number of "<<deciNum<<" is "<<deciToBinary(deciNum);
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    //square pattern

    // for same number in every line
    int n;
    cout<< "Enter a number ";
    cin >> n;
    for(int i=1; i<=n; i++){   //outer loop   to run n tmes
        for(int j=1; j<=n; j++){ //inner loop  for what to print in single row
        cout<<j;
        }
        cout<<endl; 
    }

    // for any symbol
    //using same input/value of n as pervious pattern 
    for(int i=1; i<=n; i++){   
        for(int j=1; j<=n; j++){ 
        cout<<"* ";
        }
        cout<<endl; 
    }

  // for alphabetic letter
    //using same input/value of n as pervious pattern 
   for(int i=0; i<n; i++){  
   char ch = 'A';
        for(int j=0; j<n; j++){ 
             cout<< ch ;
            ch = ch +1; 
        }
        cout<<endl; 
    }

     // for increasing  number 
       int num=1; 
    for(int i=1; i<=n; i++){      
        for(int j=1; j<=n; j++){ 
        cout<<num<<" ";
          num++;
        }  
        cout<<endl; 
    }

    //triangle Patterns
    for(int i=1; i<=n; i++){      
        for(int j=1; j<=i; j++){ 
        cout<<"*";
        }  
        cout<<endl; 
    }

    return 0;
}
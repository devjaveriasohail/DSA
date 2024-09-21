#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> ve;        //simply declare vector of int type with name ve
   
   // declare and giving value at index 
    vector<int> x={1,2}; 
    cout<<x[0];
    cout<<endl;
// declaring and initizating in brackets first parameter show the size of vector and 2 parameter is the value (1) which is place at each index
    vector<int> vec(4,1); 
   
   // printing the above vector using for loop
   for (int i: vec){    // i store the value/data present on the indexes
    cout<< i<<" "; 
   }

    return 0;
}
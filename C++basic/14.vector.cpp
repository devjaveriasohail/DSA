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
   cout<<endl;

 // vector functions
  //size
  cout<<vec.size()<<endl;
 //push back
  vec.push_back(5);
  vec.push_back(25);

  // printing  after
  cout<<"push back";
   for (int i: vec){   
    cout<< i<<" "; 
   }
   cout<<endl;

   //pop-back
  vec.pop_back();
   // printing 
    cout<<"pop back";
   for (int i: vec){   
    cout<< i<<" "; 
   }
   cout<<endl;

  //front
  cout<<"front "<<vec.front()<<endl;
  //back
  cout<<"back "<<vec.back()<<endl;
  // at
  cout<<"at "<<vec.at(1)<<endl;


 

    return 0;
}
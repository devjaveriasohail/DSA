#include <iostream>
using namespace std;

int main() {
    // arrays
    int marks[10]; //declartion
    int number[5]={100,89,87,67,45}; //declartion +initialization
    double price[]={67.90,78,56.0};

    //find size of price array
    int size=sizeof(price)/sizeof(double);
    cout<<"size of array price is "<<size<<endl;
     
     // print the price 
    cout<<"The prices are ";
    for(int i=0; i<size; i++){
        cout<<price[i]<<" ";
    }
     cout<<endl;

    //inputing values for student array
    cout<<"Enter the marks of student ";
    for(int i=0; i<10; i++){
        cin>>marks[i];
    }

   // find the smallest and largest marks in array(marks)

    // finding the largest and smallest value
    int largest=INT_MIN;
    int smallest=INT_MAX;
     for(int i=0; i<10; i++){
       // finding using for if comparsion
        // if(value[i]>largest){
        //    largest=value[i];
        // }  
        // if(value[i]<smallest){
        //     smallest=value[i];
        // }
         
    //    finding using built in function max and min;
        largest=max(marks[i],largest);
       smallest= min(marks[i],smallest);
    }
    //printing the answer
     cout<<"\nThe largest value is "<<largest;
     cout<<"\nThe smallest value is "<<smallest;
     cout<<endl;
     
    // linear search
    int find=100;
    int index=-1;
    for(int i=0; i<10; i++){
      if (marks[i]==find){
        index=i;
    }
    }
    if(index!=-1){
     cout<<"The marks "<<find<<" present at index "<<index;
    }else{
         cout<<"The marks "<<find<<"not present ";
    }
   
    
    
     
    return 0;
}
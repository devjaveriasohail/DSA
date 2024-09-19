#include <iostream>
using namespace std;

int main() {
    // arrays
    int student[6]; //declartion
    int marks[5]={100,89,87,67,45}; //declartion +initialization
    double price[]={67.90,78,56.0};

    //find size of price array
    int size=sizeof(price)/sizeof(double);
    cout<<"size of array price is "<<size<<endl;

    //inputing values for student array
    cout<<"enter the marks of student ";
    for(int i=0; i<6; i++){
        cin>>student[i];
    }

    // print the marks of students
    cout<<"The marks of students are ";
    for(int i=0; i<6; i++){
        cout<<student[i]<<" ";
    }

   // find the smallest and largest value in array
   // input the values from user
   int value[10];
   int sizeValue=10; // fixing the size of value array and assigninig it to variable
    cout<<"Enter the values to find largest and smaller in them ";
    for(int i=0; i<sizeValue; i++){
        cin>>value[i];
    }
    // finding the largest and smallest value
    int largest=value[0];
     for(int i=0; i<5; i++){
        if(value[i]>largest){
           largest=value[i];
        }
        
    }
     cout<<"\nThe largest value is "<<largest;
    return 0;
}
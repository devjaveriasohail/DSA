#include <iostream>
using namespace std;

int linearSearch(int marks[10], int find,int size)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (marks[i] == find)
        {
            return i;
        }
    }
    return -1;
}
 
void reverse(int marks[],int size){
    int start=0, end=size-1;
    while(start<end){
        swap(marks[start],marks[end]);
        start++;
        end--;
    }
}

int main()
{
    // arrays
    int marks[10];                         // declartion
    int number[5] = {100, 89, 87, 67, 45}; // declartion +initialization
    double price[] = {67.90, 78, 56.0};

    // find size of price array
    int sz = sizeof(price) / sizeof(double);
    cout << "size of array price is " << sz << endl;

    // print the price
    cout << "The prices are ";
    for (int i = 0; i < sz; i++)
    {
        cout << price[i] << " ";
    }
    cout << endl;

    // inputing values for student array
    int size=10;
    cout << "Enter the marks of student ";
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // find the smallest and largest marks in array(marks)

    // finding the largest and smallest value
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // finding using for if comparsion
        // if(value[i]>largest){
        //    largest=value[i];
        // }
        // if(value[i]<smallest){
        //     smallest=value[i];
        // }

        //    finding using built in function max and min;
        largest = max(marks[i], largest);
        smallest = min(marks[i], smallest);
    }
    // printing the answer
    cout << "\nThe largest value is " << largest;
    cout << "\nThe smallest value is " << smallest;
    cout << endl;

    // linear search
    int find = 100;
    int index = linearSearch(marks, 100,size);

    if (index != -1)
    {
        cout << "The marks " << find << " present at index " << index<<endl;
    }
    else
    {
        cout << "The marks " << find << " not present "<<endl;
    }

    // reverse array
    reverse(marks,size);
    for(int i=0; i<size; i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}
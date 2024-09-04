#include <iostream>
using namespace std;

int main() {
    //variables are container to store data like age
    int age = 40;
    cout << age<<"\n";
    //here age is variable int is datatype here

    // primitive datatype is c++ with bytes the take
    int z=23;       // 4bytes
    char name='o';  // 1byte--using single quotes for characters and double for strings
    float x=89.0f;  // 4bytes--ethier small f or large F come at the end of float value other wise it will consider as double datatype
    double y=100.89; //8bytes
    bool issafe=true; //1bytes--bool has only 2 values either true or false or true value 1 is printed for false value 0 is printed

    //here z,name,x,y, issafe are variables

    cout<<z<<"\n"<<name<<"\n"<<x<<"\n"<<y<<"\n"<<issafe;
    // "\n" is used to print out to next line

    return 0;
}
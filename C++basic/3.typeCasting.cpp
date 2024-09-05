#include <iostream>
using namespace std;

int main() {
    //type conversion--implicit--smaller to larger datatype
    char x='a';
    int y = x;
    cout <<y<<"\n"; // as y is int datatype so the output will be the ascii value of character/letter given to variable x

    //type casting--explicit--larger to smaller datatype
    double a=100.87;
    float b=a;
    cout<<"double to float is "<<b<<"\n";

    int c=b;
     cout<<"float to int is "<<c<<"\n"; // only value before the decimal is stored in data type


    

    return 0; }

#include <iostream>
using namespace std;

int main() {
    //Increment operator ++
    // post increment operator a++ , first work than increase
    int a =10;
    int b= a++;
    cout << "the value b in post increment is "<<b<<"\n";
    cout << "the value of a is "<<a<<"\n";

    // per increment operator --a , first increase than work 
    int c =10;
    int d= ++c ;
    cout << "the value d in pre increment is "<<d<<"\n";
    cout << "the value of c is "<<c<<"\n";


    //decrement operator --
    // post decrement operator a-- , first work than decrease
    int e =10;
    int f= e--;
    cout << "the value f in post decrement is "<<f<<"\n";
    cout << "the value of e is "<<e<<"\n";

    // per increment operator --a , first decrease than work 
    int g =10;
    int h= --g ;
    cout << "the value in h pre decrement is "<<h<<"\n";
    cout << "the value of g is "<<g<<"\n";
    return 0;
}
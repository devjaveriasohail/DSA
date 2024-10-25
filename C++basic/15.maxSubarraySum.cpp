#include <iostream>
#include <vector>
using namespace std;

int main() {
 // Printing all possible sub array using brute force
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(int); // storing size of array
    cout <<"Size of array is "<< n<<endl;



    for(int st=0; st<n; st++){    // for starting location of subarray
        for(int end=st; end<n; end++){ // for ending location of subarray
             for(int i=st; i<=end; i++){  // for printing subarray
                cout<<arr[i];
             }
         cout<<" ";     
        }
        cout<<endl;
    }
    return 0;
}
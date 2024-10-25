#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[]={1,-2,3,4,5};
    int n =sizeof(arr)/sizeof(int); // storing size of array
    cout <<"Size of array is "<< n<<endl;

// Printing all possible sub array using brute force
    for(int st=0; st<n; st++){    // for starting location of subarray
        for(int end=st; end<n; end++){ // for ending location of subarray
             for(int i=st; i<=end; i++){  // for printing subarray
                cout<<arr[i];
             }
         cout<<" ";     
        }
        cout<<endl;
    }

// Finding Maximum  subarray Sum using brute force
int maxSum=INT_MIN;
    for(int st=0; st<n; st++){ 
       int  currentSum=0;   
        for(int end=st; end<n; end++){ 
            currentSum += arr[end];
            maxSum=max(currentSum,maxSum);
        }
    }
    cout<<"Maximum Subarray sum is "<<maxSum;
cout<<endl;
//KADANE'S ALGORITHM
// Finding Maximum  subarray Sum using  KADANE'S ALGORITHUM
int maxmiumSum=INT_MIN;
int  currSum=0;   
    for(int i=0; i<n; i++){ 
            currSum += arr[i];
            maxmiumSum=max(currSum,maxmiumSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Maximum Subarray sum using kadane's algo "<<maxmiumSum;
    return 0;
}
#include<iostream>
#include<limits.h>

using namespace std;

long long maxSubarraySum(int arr[], int n){

    long long maxi = LONG_MIN;
    long long sum  = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for(int i=0;i<n;i++){

        if(sum == 0) start = i; // starting index:

        sum += arr[i];
        
        if(sum > maxi){
            maxi = sum;

            ansStart = start;
            ansEnd   = i;
        }

        // If sum < 0: discard the sum calculated:
        if (sum < 0){
            sum = 0;
        }
    }

    // printing the subarray:

    cout<<"The subarray is: [";
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]n";

    //To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;
}

int main(){

    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements for array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long maxSum = maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is: "<<maxSum<<endl;

    return 0;
}
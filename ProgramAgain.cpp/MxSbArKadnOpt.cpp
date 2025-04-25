#include<iostream>
#include<limits.h>

using namespace std;

long long maxSubarraySum(int arr[], int n){
    long long maxi = LONG_MIN;
    long long sum  = 0;

    for(int i=0;i<n;i++){

        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated 
        if(sum < 0){
            sum = 0; 
        }
    }
    // To consider the sum of the empty subarray
    // uncomment the following check:

    // if (maxi < 0) maxi = 0;

    return maxi;
}

int main(){

    int n;
    cout<<"Enter some value of n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter some elements for array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    long long maxSum = maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is: "<<maxSum<<endl;


    return 0;

}
#include<iostream>
#include<limits.h>

using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){

            //current subarray = arr[i.........j]

            // and the current element arr[j]
            // to the sum i.e. sum of arr[i......j-1]

            sum += arr[j];

            maxi = max(maxi,sum);
        }
    }
    return maxi;
}


int main(){

    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elemets for array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is: "<<maxSum<<endl;

    return 0;
}
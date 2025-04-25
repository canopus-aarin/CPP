#include<iostream>
#include<limits.h>

using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //subarray = arr[i........j]
            int sum = 0;

            //add all the elements of subarray:
            for(int k =i;k<=j;k++){
                sum += arr[k];
            }

            maxi = max(maxi,sum);
        }

    }

    return maxi;
}

int main(){

    int n;
    cout<<"Enter some value of n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter some elements for array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum = maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is:"<<maxSum<<endl;

    return 0;
}
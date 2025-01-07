#include<iostream>
#include<climits>

using namespace std;

long long MaxSubArray(int arr[], int n){
long long maxi = LONG_MIN;
long long sum =0;

for(int i=0;i<n;i++){

    sum = sum + arr[i];
    if (sum > maxi){
        maxi = sum;
    }
    if(sum < 0){
        sum = 0;
    }
}
return maxi;
}

int main(){

    int arr[] = {-2, 3, 1, -5, 6, -7, -3, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long maxsum = MaxSubArray(arr, n);
    cout<<"The Maximum Sub Array Sum Is: "<<maxsum<<endl;

    return 0;
}
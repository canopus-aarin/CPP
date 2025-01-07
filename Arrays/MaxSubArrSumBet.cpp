#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int MaxSubArray(vector<int>& v, int n){

    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){

            sum = sum+v[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}



int main(){

    vector<int> arr = {1,2,6,-4,2,-7,8,-1,3,9,6,4,-7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxsum = MaxSubArray(arr, n);
    cout<<"The Max Sub Array Is: "<<maxsum<<endl;

    return 0;
}
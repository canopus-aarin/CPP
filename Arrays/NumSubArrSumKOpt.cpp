#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int findAllSubArraysWithGivenSum(vector<int> &arr, int k){

    int n = arr.size();
    unordered_map<int,int>  mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1;
    for(int i=0;i<n;i++){

        preSum = preSum + arr[i];

        int remove = preSum - k;

        cnt = cnt + mpp[remove];

        mpp[preSum] = mpp[preSum] + 1;
    }

    return cnt;
}

int main(){

    vector<int> arr = {3,1,2,4};\
    int k = 6;

    int cnt = findAllSubArraysWithGivenSum(arr,k);

    cout<<"The number of subarray is: "<<cnt<<endl;

    return 0;
}
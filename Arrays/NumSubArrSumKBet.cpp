#include<iostream>
#include<vector>

using namespace std;

int findAllSubArraysWithGivenSum(vector<int> &arr, int k){

    int n = arr.size();
    int cnt = 0;

    for(int i=0;i<n;i++){
        int sum=0;

        for(int j=i;j<n;j++){

            sum = sum + arr[j];

            if(sum == k)
            cnt++;
        }
    }

    return cnt;

    
}


int main(){

    vector arr = {3,1,2,4};
    int k = 6;

    int cnt = findAllSubArraysWithGivenSum(arr,k);
    cout<<"The number of subarrays is: "<<cnt<<endl;

    return 0;
}


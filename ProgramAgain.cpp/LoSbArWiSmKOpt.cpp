#include<iostream>
#include<vector>

using namespace std;

int getLongestSubarray(vector<int>&a, long long k){
    int n = a.size();

    int left =0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while(right < n){
        //if sum > k, reduce the subarray from left....
        //until sum becomes less or equal to k.....
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        // if sum = k, update the maxLen i.e. answer:
        if(sum == k){
            maxLen = max(maxLen, right- left +1);
        }

        //Move forward the right pointer.....
        right++;
        if (right < n) sum += a[right];
    }
    return maxLen;
}

int main(){

    vector<int> a = {2,3,5,1,9};
    long long k = 10;
    int len = getLongestSubarray(a,k);
    cout<<"The lenght of the longest subarray is: "<<len<<endl;

    return 0;
}
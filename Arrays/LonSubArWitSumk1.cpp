#include<iostream>
#include<vector>

using namespace std;

int GetLongestSubarray(vector<int> &a, long long k){

    int n = a.size();  
    int left = 0;
    int right = 0;

    long long sum = a[0];
    int maxLen = 0;

    while(right<n){

        while(left<=right && sum>k){
            sum = sum-a[left];
            left++;
        }

        if(sum=k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right<n) sum = sum+a[right];
    }

    return maxLen;
}



int main(){

    vector<int> a = {2,3,5,1,9};
    long long K = 10;
    int len = GetLongestSubarray(a,K);

    cout<<"The length of the longest sub array "<<len<<endl;

    return 0;
}
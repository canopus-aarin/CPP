#include<iostream>
#include<vector>

using namespace std;

int GetLongestSubarray(vector<int>& a, long long k){
    int n = a.size();     // Size of the array.


    int len = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // add all the elements of
            // subarray = a[i.....j]:

            long long s = 0;
            for(int K=i;K<=j;K++){
                s = s+a[K];
            }

            if(s==k)
            len = max(len,j-i+1);
        }
    }
    return len;
}


int main(){

    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = GetLongestSubarray(a,k);
    cout<<"The Length Of The Longest Subarray Is :"<<len<<endl;

    return 0;
}
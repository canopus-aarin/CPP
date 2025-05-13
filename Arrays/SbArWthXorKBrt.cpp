#include<iostream>
#include<vector>

using namespace std;

int subarraysWithXorK(vector<int> a, int k){
    int n = a.size();  //size of the given array..
    int cnt = 0;

    //Step1: Generating subarrays:
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            //step 2: calculate XOR of all elements:
            int xorr = 0;
            for(int k = i; k <= j; k++){
                xorr = xorr ^ a[k];
            }

            //step 3: check xor and count:
            if(xorr == k) cnt++;
        }
    }
    return cnt;
}

int main(){
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout<<"The number of subarrays with XOR k is: "<<ans<<endl;

    return 0;
}
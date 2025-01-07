#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int MajorityElement(vector<int>&V){

    int n = V.size();

    unordered_map<int,int>mpp;

    for(int i=0;i<n;i++){
        mpp[V[i]]++;
    }
    for(auto it: mpp){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1;
}


int main(){

    vector<int>arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = MajorityElement(arr);
    cout<<"The Majority Element Is: "<<ans<<endl;

    return 0;
}
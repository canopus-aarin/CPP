#include<iostream>
#include<vector>
#include<map>

using namespace std;

int getSingleElement(vector<int> &arr){

    // size of the array.....
    int n=arr.size();

    // Declare the hashmap.....and hash the given array.....

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // Find the single element and return the answer.....

    for(auto it : mpp){
        if(it.second==1)
        return it.first;
    }

    // This line will never execute if the array contains a single element.......

    return -1;

}


int main(){

    vector<int> arr = {5,1,2,1,2};
    int ans = getSingleElement(arr);
    cout<<"The Single Element Is: "<<ans<<endl;

    return 0;
}
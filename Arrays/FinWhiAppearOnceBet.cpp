#include<iostream>
#include<vector>

using namespace std;

int getSingleElement(vector<int> &arr){

    // size of the array.....
    int n=arr.size();

    // find the maximum element.......

    int maxi = arr[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
     
     // Declare hash array of size maxi+1;
     // and hash the given array........

     vector<int> hash(maxi+1,0);
     for(int i=0;i<n;i++){
        hash[arr[i]]++;
     }


     // Find The Single Element and return the answer:


     for(int i=0;i<n;i++){
        if(hash[arr[i]]==1)
        return arr[i];
     }

     // this line will never execute if the array conatins a single element .......

     return -1;
}



int main(){

    vector<int> arr ={4,1,2,1,2};
    int ans = getSingleElement(arr);
    cout<<"The Single Element Is: "<<ans<<endl;

    return 0;
}
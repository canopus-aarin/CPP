#include<iostream>
#include<vector>
using namespace std;

int getSingleElement(vector<int> &arr){
    //Size of the array...
    int n = arr.size();

    //Run a loop for selecting elements...
    for(int i=0;i<n;i++){
        int num = arr[i];
        int cnt = 0;

        //Find the occurance using linear search:
        for(int j=0;j<n;j++){
            if(arr[j] == num)
            cnt++;
        }
        // if the occurance is 1 return ans:
        if(cnt == 1) return num;
    }

    //This line will never execute if the array contains a single element.
    return -1;
}

int main(){

    vector<int> arr = {4,1,2,1,2};
    int ans = getSingleElement(arr);
    cout<< " The Single Element Is:"<< ans <<endl;

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> PrintLeaders(vector<int>& arr, int n){

    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leader = true;

        // checking whether arr[i] is greater than all the elements at the right....

        for(int j=i+1;j<n;j++)
        if(arr[j] > arr[i]){

            // If any element found is greater than current leader then current leader is not the leader....
            leader = false;
            break;
        }
        if(leader)
        ans.push_back(arr[i]);
    }
    return ans;
}


int main(){

    int n = 6;
    vector<int> arr  = {10,22,12,3,0,6};
    vector<int> ans = PrintLeaders(arr, n);
    for(int i =0;i<ans.size();i++){

        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
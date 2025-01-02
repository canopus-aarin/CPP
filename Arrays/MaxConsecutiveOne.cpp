#include<iostream>
#include<vector>

using namespace std;

int findMaxCondecutiveOnes(vector<int> & nums){

    int cnt = 0;
    int maxi = 0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}


int main(){

    vector<int> nums ={1,0,0,1,1,1,0,0,2,1,1,1,1};
    int ans = findMaxCondecutiveOnes(nums);
    cout<<"The Maximum Consecutive Ones Are: "<<ans<<endl;

    return 0;
}
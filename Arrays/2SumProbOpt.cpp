#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string twoStirng(int n, vector<int> &arr, int target){

    sort(arr.begin(), arr.end());
    int left = 0;
    int right= n-1;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }

        else if(sum < target) left++;
        else right--;
    }
    return "NO";
}


int main(){

    int n = 5;
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    string ans = twoStirng(n, arr, target);
    cout<<"This Is The Answer: "<<ans<<endl;

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> PrintLeaders(vector<int>& arr, int n){

    vector<int> ans;
    // Last element of an array is always a leader...
    // push into array.....

    int max = arr[n-1];
    ans.push_back(arr[n-1]);

    // start checking from the end whether a number is 
    // greater than the maxs no.
    // from right, hence leader....

    for(int i=n-2;i>=0;i--)
    if(arr[i] > max){
        ans.push_back(arr[i]);
        max = arr[i];
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter number of elements for array "<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements for your array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<"Elements of array are "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

   // int n = 6;
   // int arr[n] = {10,22,12,3,0,7};

    vector<int> ans = PrintLeaders(arr, n);
    for(int i = ans.size()-1;i>=0;i--){
        cout<<"Leaders of array are: "<<ans[i]<<endl;
    }
    cout<<endl;

    return 0;
}
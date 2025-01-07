#include<iostream>
#include<vector>

using namespace std;

bool linearSearch(vector<int>&a, int num){

    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i] == num)
        return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a){
    int n = a.size();
    int longest = 1;
    

    for(int i=0;i<n;i++){
        int x = a[i];
        int cnt = 1;

        while(linearSearch(a, x+1) == true){

            x = x+1;
          cnt = cnt +1;

        }

        longest = max(longest,cnt);
    }

    return longest;
}

int main(){

    int n;
    cout<<"Enter some value for n "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter you array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements in array are "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int ans = longestSuccessiveElements(arr);
    cout<<"The longest consecutive sequence is "<<ans<<endl;

    return 0;
}
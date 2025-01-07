#include<iostream>
#include<vector>


using namespace std;

int MajorityElement(vector<int>v){

    int n=v.size();
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(v[j]==v[i]){
                cnt++;
            }
        }
        if(cnt>(n/2))
        return v[i];
    }
    return -1;
}



int main(){

    vector<int> arr = {2, 2, 1, 1, 1, 2, 1};
    int ans = MajorityElement(arr);
    cout<<"The Most Occuring Element Is "<<ans<<endl;


    return 0;
}
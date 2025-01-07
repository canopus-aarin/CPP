#include<iostream>
#include<vector>


using namespace std;

vector<int> RearrangeBySign(vector<int> A, int n){

    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
        if(A[i]>0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    for(int i=0;i<n/2;i++){
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
    }
    return A;
}



int main(){

    int n = 4;
    vector<int> A = {1,-2,-2,7};
    vector<int> ans = RearrangeBySign(A,n);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
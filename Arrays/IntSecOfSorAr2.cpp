#include<iostream>
#include<vector>

using namespace std;

vector<int> IntersectionOfArray(vector<int> A, vector<int> B){

    // Declare ans array......
    vector<int> ans;

    int i=0,j=0;

    // To Transverse the array....

    while(i<A.size() && j<B.size()){

        if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}


int main(){

    vector<int> A{1,2,3,3,4,6,7,7,9};
    vector<int> B{3,3,4,4,5,7,7,8,9};


    vector<int> ans = IntersectionOfArray(A,B);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
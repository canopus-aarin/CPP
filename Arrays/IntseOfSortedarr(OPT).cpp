#include<iostream>
#include<vector>

using namespace std;

vector<int> IntersectionOfArrays(vector<int> A, vector<int> B){

    // Declare ans array....
    vector<int> ans;

    int i=0,j=0;

    //To transverse the array.....

    while(i< A.size() && j< B.size()){

        //if current element in i is smaller....
        if(A[i] < B[j]){
            i++;
        }
            else if(B[j] < A[i]){
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


int main()
{
    //Array Initialization.
    vector <int> A {1,2,3,3,4,5,6,7};
    vector <int> B {3,3,4,4,5,8};

    vector<int> ans = IntersectionOfArrays(A,B);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
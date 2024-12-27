#include<iostream>
#include<vector>

using namespace std;

vector<int> IntersectionOfArrays(vector<int> A, vector<int> B){
    vector<int> ans;

    // to maintain visited 

    vector<int> Visited(B.size(),0);
    int i=0,j=0;
    for(i=0;i<A.size();i++){

        for(j=0;j<B.size();j++){

            if(A[i]==B[j] && Visited[j]==0){

                ans.push_back(B[j]);
                Visited[j]=1;

                break;
            }

            else if(B[j]>A[i]) break;
            // Beacuse Array Is Sorted Element Will Not Be Beyond This.......
        }
    }
    return ans;
}

int main()
{
    //Array Initialisation.

    vector<int> A{1,2,3,3,4,5,6,7};
    vector<int> B{3,3,4,4,5,8};

    vector<int> ans = IntersectionOfArrays(A,B);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}

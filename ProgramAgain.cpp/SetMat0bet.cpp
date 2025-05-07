#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){

    int row[n] = {0}; // row array....
    int col[m] = {0}; // col array.....

    // Transverse the matrix:

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                // mark ith index of row with 1:
                row[i] = 1;

                // mark jth index of col with 1:
                col[j] = 1;
            }
        }
    }

    // finally mark all (i,j) as 0
    // if row[i] or col[j] is marked with 1:....

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main(){

    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
    
    cout<<"The Final matrix is n: "<<endl;
    for(auto it : ans){
        for(auto ele : it ){

            cout<<ele<<" ";
        }

        cout<<endl;
    }

    return 0;
}
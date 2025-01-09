#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> Rotate(vector<vector<int>> &matrix){

    int n = matrix.size();
    vector<vector<int>> Rotated(n, vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Rotated[j][n-i-1] = matrix[i][j];
        }
    }

    return Rotated;
}


int main(){

    vector<vector<int>> arr;

    arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> Rotated = Rotate(arr);
    cout<<"Rotated Image"<<endl;
    for(int i=0;i<Rotated.size();i++){
        for(int j=0;j<Rotated[0].size();j++){
            cout<<Rotated[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
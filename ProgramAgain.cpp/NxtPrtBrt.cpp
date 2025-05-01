#include<iostream>
#include<vector>

using namespace std;

void recurPermute(int index, vector<int> &num, vector<vector<int>> &ans){
    if(index == num.size()){
        ans.push_back(num);
        return;
    }
    for(int i=index;i<num.size();i++){
        swap(num[index], num[i]);
        recurPermute(index+1, num, ans);
        swap(num[index], num[i]);
    }

}

vector<vector<int>> permute(vector<int>& num){

    vector<vector<int>> ans;
    recurPermute(0, num, ans);
    return ans;
}




int main(){

    vector<int> input = {1, 2, 3};
    vector<vector<int>> result = permute(input);

    for(const auto& vec : result){
        for(int val : vec){
            cout<< val <<" ";
        }

        cout<<endl;
    }



    return 0;
}
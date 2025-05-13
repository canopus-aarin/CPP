#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> majorityElement(vector<int> v){
    int n = v.size(); // size of the array...
    vector<int> ls; // list of answers....

    // declaring a map:
    map<int,int> mpp;

    //least occurence of the majority element:
    int mini = int(n / 3) + 1;

    //storing the elements with its occurence:
    for(int i = 0; i < n; i++){
        mpp[v[i]]++;

        //checking if v[i] is
        //the majority element:

        if (mpp[v[i]] == mini){
            ls.push_back(v[i]);
        }
        if (ls.size() == 2) break;
    }
    return ls;
}

int main(){

    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);

    cout<<"The majority elements are: "<<endl;
    for(auto it : ans)
    cout<< it <<" ";
    cout<<endl;

    return 0;
}
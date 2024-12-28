#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int SortArr(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}


int main()
{
    vector<int> arr1 = {2,4,4,5,21,44};
    vector<int> arr2 = {8,10,11,53,11,111};

    cout<<"The Largest Element In The Array Is:"<<SortArr(arr1)<<endl;
    cout<<"The Largest Element In The Array Is:"<<SortArr(arr2)<<endl;

    return 0;
}
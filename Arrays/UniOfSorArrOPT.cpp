#include<iostream>
#include<vector>

using namespace std;

vector<int> FindUnion(int arr1[],int arr2[],int n,int m){
    int i=0,j=0; //pointers 
    vector<int>Union; //Union vector 
    while(i<n && j<m){
        if(arr1[i]<=arr2[j])//case 1 and 2
        {
            if(Union.size()==0 || Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
            i++;
        }
        else{
            if(Union.size()==0 || Union.back()!=arr2[j])
            Union.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n) // If any element left in array1
    {
        if(Union.back()!=arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    while(j<m) // If any element left in array2
    {
        if(Union.back()!=arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}


int main()
{
    int n=10,m=7;
    int arr1[]={1,2,3,4,5,6,7,8,9,12};
    int arr2[]={2,3,4,5,5,9,10};
    vector<int> Union=FindUnion(arr1,arr2,n,m);
    cout<<"Union of arr1 and arr2 is:"<<endl;
    for(auto & val: Union)
    cout<<val<<" ";
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> SortedArray(int a[], int b[],int n,int m){
    int i  = 0;
    int j  = 0;

    vector<int> UnionArr;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(UnionArr.size()==0 || UnionArr.back()!=b[j]){
            UnionArr.push_back(b[j]);
        }
        j++;
    }

    while(i<n){
        if(UnionArr.size()==0 || UnionArr.back()!=a[i]){
            UnionArr.push_back(a[i]);
        }
        i++;
        }
        return UnionArr;
    }


int main(){

    int n=10,m=7;
    int arr1[]={1,2,3,4,5,6,7,8,9,0};
    int arr2[]={2,3,4,5,11,13,99};


    vector<int> result = SortedArray(arr1,arr2,n,m);


    cout<<"Union of the two arrays is:"<<endl;{
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}
}




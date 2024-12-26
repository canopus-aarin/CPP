#include<iostream>
#include<vector>

using namespace std;

void Merge(vector<int> &arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void MergeSort(vector<int> &arr, int low, int high){
    if(low>=high) return ;
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}

int main()
{
    int n;
    cout<<"Enter The Number Of Elemets You Want In Array"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter Elements For The Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

        cout<<"Before Sorting The Array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        MergeSort(arr,0,n-1);

        cout<<"Displaying The Array After Sorting"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}
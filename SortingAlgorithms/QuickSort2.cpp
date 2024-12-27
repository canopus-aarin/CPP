#include<iostream>
#include<vector>

using namespace std;

int Partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;
}


void Qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex=Partition(arr,low,high);
        Qs(arr,low,pIndex-1);
        Qs(arr,pIndex+1,high);
    }
}


int main()
{
    int n;
    cout<<"Enter The Number Of Elements That You Want In Array"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter The Elements For The Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
      cout<<endl;
    Qs(arr,0,arr.size()-1);

    cout<<"After Sorting The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
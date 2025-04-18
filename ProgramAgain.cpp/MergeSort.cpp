#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp; // temporary array...
    int left = low; // starting index of lefty half of array...
    int right = mid+1; // starting index of right half of arr...

    // storing elements in the temporary array in a sorted manner..........//

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left.....

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // if elements on the right half are still there....

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to array.....

    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>&arr, int low, int high){
    if (low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);  // left half 
    mergeSort(arr,mid+1,high); // right half 
    merge(arr,low,mid,high); // merging sorted halves.....
}

int main(){

    int n;
    vector<int> arr(n);
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;

    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
    cout<<"After sorting the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high){
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
    if(low>=high) return;
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}


int main()
{
    int n;
    //Ask the user for number of elemets in the array.....
    cout<<"Enter The Number Of Elements In The Array"<<endl;
    cin>>n;

    //Create A Vector To Store Arrays Elements.....
    vector<int> arr(n);

    // Ask The User To Input The Elements Of The Array.....
    cout<<"Enter"<< n <<"Elements For The Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];        // Input The Array At Index i.......
    }

    //Display The Array Before Sorting........
    cout<<"Before Sorting The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Perform Merge Sort On The Array......
    MergeSort(arr,0,n-1);

    //Display The Array After Sorting 
    cout<<"After Sorting The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
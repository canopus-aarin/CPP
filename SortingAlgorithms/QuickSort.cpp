#include<iostream>
#include<vector>

using namespace std;

int Partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i] <= pivot && i <=high-1){       // We Are Doing High-1 Cause On Doing i++ It May Cross The Array...So Yeah
            i++;                                //We Are Doing <= Cause If There Was Another Number Same As Pivot Then It Would Come On Left..
        }
        while(arr[j] > pivot && j>= low+1){    
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;                      // Partition Index Is Nothing More Than j.......(That Is pIndex).....
}

void Qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = Partition(arr, low, high);
        Qs(arr,low,pIndex-1);
        Qs(arr,pIndex+1,high);
    }
}

   vector<int> QuickSort(vector<int> arr){
   Qs(arr,0,arr.size()-1);
    return arr;
}



int main()
{
    vector<int> arr={4,6,2,5,7,9,1,3};
    int n=arr.size();
    cout<<"Before Using Quick Sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr = QuickSort(arr);
    cout<<"After Using Quick Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

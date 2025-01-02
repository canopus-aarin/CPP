#include<iostream>
#include<vector>

using namespace std;

void Merge(vector<int> &arr,int low, int mid, int high){

    vector<int> temp;  //TEMPORARY ARRAY
    int left = low;    //STARTING INDEX OF LEFT HALF OF ARRAY
    int right= mid+1;  //STARTING INDEX OF RIGHT HALF OF ARRAY

    // SORTING ELEMETS IN THE TEMPORARY ARRAY IN A SORTED MANNER //


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


    // IF ELEMENTS ON THE LEFT HALF ARE STILL LEFT //
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    // IF THE ELEMENTS ON THE RIGHT ARE STILL THERE //
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    // TRANFERING ALL ELEMENTS FROM TEMPORARY(temp) TO ARR(ORIGINAL) //

    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}



    void MergeSort(vector<int> &arr,int low ,int high){
        if(low>=high) return;
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);     // LEFT HALF
        MergeSort(arr,mid+1,high);  // RIGHT HALF
        Merge(arr,low,mid,high);    // MERGING SORTED HALVES 
    
    }


    int main()
    {
        vector<int> arr= {9,1,7,5,3,6,4};
        int n=7;

        cout<<"Before Sorting Array:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
        MergeSort(arr,0,n-1);
        cout<<"After Sorting Array:"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
        return 0;
    }


 




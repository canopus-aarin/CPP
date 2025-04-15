#include<iostream>

using namespace std;

// Function To Print Array.....

void PrintArray(int arr[], int n){
    cout<<"The reversed array is "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
// Function to reverse array using recursion......
void ReverseArray(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        ReverseArray(arr, start+1, end-1);
    }
}

int main(){

    int n = 5;
    int arr[] ={5,4,3,2,1};
    ReverseArray(arr,0,n-1);
    PrintArray(arr,n);
    return 0;
}
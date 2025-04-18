#include<iostream>
//#include<algorithm>
using namespace std;

void PrintArray(int arr[], int n){
    cout<<"The reversed array is:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Function to reverse array

void ReverseArray(int arr[], int n){
    int p1 = 0, p2 = n-1;
    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++; p2--;
    }
    PrintArray(arr,n);
}

int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    ReverseArray(arr,n);

    return 0;
}
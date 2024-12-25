#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int minimum=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        int temp=arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
}



int main()
{
    int n;
    cout<<"Enter Some Value For N"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Some Array"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    Selection_Sort(arr,n);
    cout<<"The Sorted Array Is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
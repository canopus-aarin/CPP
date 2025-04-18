#include<iostream>
using namespace std;

void Bubble_sort(int arr[], int n){

    // bubble sort....
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<" After using bubble sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter"<<n<<"numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubble_sort(arr,n);


    return 0;
}
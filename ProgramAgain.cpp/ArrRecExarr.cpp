#include<iostream>
using namespace std;

void PrintArray(int ans[], int n){
    cout<<"The reversed array is:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
// Function to reverse array using an auxillary array.......
void ReverseArray(int arr[], int n){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1] = arr[i];
    }
    PrintArray(ans,n);
}

int main(){
    int n=5;
    int arr[] = {5,4,3,2,1};
    ReverseArray(arr,n);

    return 0;
}
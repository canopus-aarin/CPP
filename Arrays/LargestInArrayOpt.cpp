#include<iostream>

using namespace std;

int FindLargestElement(int arr[],int n){

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}


int main()
{
    int arr1[]={32,12,32,4,8};
    int n=5;
    int max=FindLargestElement(arr1,n);
    cout<<"The Largest Element In The Array Is:"<<max<<endl;

    int arr2[]={11,2,11,31,71,86};
     n=6;
     max=FindLargestElement(arr2,n);
    cout<<"The Largest Element In The Array Is:"<<max<<endl;


    return 0;
}
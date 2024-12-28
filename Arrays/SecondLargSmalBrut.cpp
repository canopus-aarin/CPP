#include<iostream>
#include<algorithm>

using namespace std;

void GetElements(int arr[],int n){
    if(n==0 || n==1)
    cout<<-1<<" "<<-1<<endl;  // edge case when only one elements is present in array

    sort(arr,arr+n);
    int Ssmallest=arr[1];
    int Slargest=arr[n-2];

    cout<<"Second Smallest IS:"<<Ssmallest<<endl;
    cout<<"Second Largest Is:"<<Slargest<<endl;
}





int main()
{
    int n;
    cout<<"Enter the Size Of Array"<<endl;
    cin>>n;

    if(n<=1){
        cout<<"Array size must be greater than 1 to find  second smallest and second largest elements."<<endl;
        return 0;
    }


    int arr[n];
    cout<<"Enter The Elements Of The Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        GetElements(arr,n);

    
    return 0;
}
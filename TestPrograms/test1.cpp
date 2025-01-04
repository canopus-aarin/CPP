#include<iostream>
#include<vector>
#include<climits>

using namespace std;

    int Second(vector<int>& arr, int n){

    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }

    int Slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Slargest && arr[i]!=largest)
        Slargest=arr[i];
    }
    return Slargest;
}





int main(){

    int n;
    cout<<"Enter how long you want the array to be "<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements for the array"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    cout<<"Array is"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

    cout<<endl;

    

    cout<<"Seconlargest element is "<<Second(arr,n)<<endl;


    return 0;
}
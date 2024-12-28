#include<iostream>
#include<climits>

using namespace std;

void GetElements(int arr[],int n){
    if(n==0 || n==1)
    cout<<-1<<" "<<-1<<endl;    //edge case when only one element in the array........
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;

    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
        second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
        second_large=arr[i];
    }

    cout<<"Second Smallest is "<<second_small<<endl;
    cout<<"Second Largest is "<<second_large<<endl;
}

int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    GetElements(arr,n);
    return 0;
}

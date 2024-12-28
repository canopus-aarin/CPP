#include<iostream>
#include<climits>

using namespace std;

int SecondSmallest(int arr[],int n)
{
    if(n<2)
    return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;

    for(i=0;i<n;i++){
        
            if(arr[i] < small){
                second_small = small;
                small = arr[i];
            }
            else if(arr[i] < second_small && arr[i]!=small){
                second_small=arr[i];
            }
    }
        return second_small;
    }

    int SecondLargest(int arr[],int n){
        if(n<2)
        return -1;
        int large=INT_MIN,second_large=INT_MIN;
        int i;
        for(i=0;i<n;i++){
            if(arr[i] > large){
                second_large=large;
                large = arr[i];
            }
            else if(arr[i] > second_large && arr[i]!=large){
                second_large=arr[i];
            }
        }
        return second_large;
    }


    int main()
    {
        int arr[]={1,2,4,7,7,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        int sS=SecondSmallest(arr,n);
        int sL=SecondLargest(arr,n);

        cout<<"Second Smallest Is "<<sS<<endl;   
        cout<<"Second Largest Is "<<sL<<endl;

        return 0;
    }






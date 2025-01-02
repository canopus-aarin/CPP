#include<iostream>
#include<vector>

using namespace std;

vector<int> MoveZeros(int n, vector<int> a){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    //no non zero numbers
    if(j==-1) return a;


    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}




int main(){

    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    
    vector<int> a(n);
    cout<<"Enter some values for array with couple of zero's in it"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Array before moving zeros"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    a = MoveZeros(n,a);

    cout<<"Array after moving zeros"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
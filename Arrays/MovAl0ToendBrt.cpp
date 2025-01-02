#include<iostream>
#include<vector>

using namespace std;

vector<int> MoveZeros(int n, vector<int> a){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    int n1=temp.size();
    for(int i=0;i<n1;i++){
        a[i]=temp[i];
    }

    for(int i=n1;i<n;i++){
        a[i]=0;
    }
    return a;
}

int main(){

    vector<int> a = {1,0,3,0,0,0,4,5,0,7};
    int n=10;
    cout<<"Before Moving Zeros"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a = MoveZeros(n,a);
    cout<<"After Moving Zeros"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}
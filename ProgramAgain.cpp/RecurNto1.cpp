#include<iostream>
using namespace std;

void Func(int i,int n){

    // Base condition........
    if(i<1) return;
    cout<<i<<endl;

    // Function to print i till decrements  to 1.....
    Func(i-1,n);

}



int main(){
    int n;
    cout<<"Give some value for N"<<endl;
    cin>>n;
    cout<<endl;
    Func(n,n);
    return 0;
}
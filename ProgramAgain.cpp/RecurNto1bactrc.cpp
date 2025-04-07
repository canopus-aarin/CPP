#include<iostream>
using namespace std;

void Func(int i,int n){

    // Base condition.......
    if(i>n) return;

    // Function call to print (i+1) integers.....
    Func(i+1,n);
    cout<<i<<endl;
}


int main(){
    // here's let's take the value of n to be 4.....

    int n;
    cout<<"Give Some Value To N"<<endl;
    cin>>n;

    Func(1,n);

    return 0;
}
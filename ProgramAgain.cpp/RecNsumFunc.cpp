#include<iostream>
using namespace std;

int Func(int n){
    //Base Condition.....
    if(n==0)
    {
        return 0;
    }
    //Problem broken down into 2 parts and then combined......
    return n+Func(n-1);
}

int main(){
    int n =3;
    cout<<Func(n)<<endl;
    return 0;
}
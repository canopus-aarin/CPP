#include<iostream>
using namespace std;

void Func(int i, int sum){

    // Base condition.....
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    // Function call to increment sum by i till i decrements to 1..
    Func(i-1, sum+i);
}

int main(){
    // Here, let's take the value of n to be 3......
    int n=3;
    Func(n,0);
    
    return 0;
}
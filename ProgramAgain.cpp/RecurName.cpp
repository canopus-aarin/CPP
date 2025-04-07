#include<iostream>
using namespace std;

void Function(int i, int n){

    // Base Condition.....

    if(i>n) return ;
    cout<<"Kan"<<endl;

    // Function call to print till i increments......
    Function(i+1,n);
}

int main(){

    // Here, let's take the value of n to be 4........
    int n =4;
    Function(1,n);
    
    return 0;
}
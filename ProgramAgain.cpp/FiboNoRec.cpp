#include<iostream>
using namespace std;

int main(){
    int n = 5;
    if(n == 0){
        cout<<"The Fibonacci Series Up To "<<n<<"Th Term:"<<endl;
        cout<<0;
    }
    else {
        int secondLast = 0; // for(i-2)th term....
        int Last = 1; //for(i-1)th term......
        cout<<"The Fibonacci Series Up To "<<n<<"Th Term:"<<endl;
        cout<<secondLast<<" "<<Last<<" ";
        int cur;
        for(int i =2;i<=n;i++){
            cur = Last + secondLast;
            secondLast = Last;
            Last = cur;
            cout<< cur <<" ";
        }
    }

    return 0;
}
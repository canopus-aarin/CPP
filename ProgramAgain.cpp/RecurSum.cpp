#include<iostream>
using namespace std;

void solve(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<"The sum of the first"<<n<<"numbers is: "<<sum<<endl;
}

int main(){
    solve(5);
    solve(6);
    return 0;


}
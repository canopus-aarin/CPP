#include<iostream>
using namespace std;

void Solve (int n){
    int sum = n*(n+1)/2;
    cout<<"The sum of the first "<<n<<" number is: "<<sum<<endl;
}

int main(){

    Solve(5);
    Solve(6);
    
    return 0;
}
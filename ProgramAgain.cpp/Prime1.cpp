#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter some value for n"<<endl;

    cin>>n;

    for(int i=2;i<n;i++){

        if(n%i == 0){
        cout<<"Not a prime"<<endl;
    }

    else {
        cout<<" a prime"<<endl;
    }

    return 0;
}
}

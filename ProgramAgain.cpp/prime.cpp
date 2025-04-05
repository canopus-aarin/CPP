#include<iostream>
using namespace std;

void prime(int n){

    if(n<=1){
        cout<<"false";   // 0 and 1 are not prime........z
        return;
    }

    int crt =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            crt++;
            if(i!=n/i) crt++;
        }
    }
    if(crt == 2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}


int main(){

    int n;
    cout<<"Give Some Value To N"<<endl;
    cin>>n;
    prime(n);

    return 0;
}
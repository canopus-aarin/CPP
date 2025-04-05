#include<iostream>
using namespace std;

void Armstrong(int n){

 int  dup = n;
 int  sum = 0;

 while(n>0){

    int ld =n%10;
    sum =sum+(ld*ld*ld);

    n=n/10;
 }
    if(sum ==dup){
        cout<<"Armstrong"<<endl;
    }
    else cout<<"Not Armstrong"<<endl;
 

}


int main(){

    int n;
    cout<<"Enter Some Value For N"<<endl;
    cin>>n;
    Armstrong(n);



    return 0;


}
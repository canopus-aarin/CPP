#include<iostream>

using namespace std;

void Palindrome(int n){
    int revnum=0;
    int dup=n;

    while(n>0){
        int ld=n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }

    if(dup==revnum) cout<<"true";
    else cout<<"false";
}

int main()
{
    int n;
    cout<<"Enter Some Value For N"<<endl;
    cin>>n;
    Palindrome(n);
    return 0;
}
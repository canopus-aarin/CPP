#include<iostream>

using namespace std;

void pattern1(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
                for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }

            }
        }
    }

}

int main()
{
    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;
    cout<<endl;
    pattern6(n);
    
}
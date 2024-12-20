#include<iostream>
using namespace std;

int func(int n)
{
    if(n<=1) return n;
    int last=func(n-1);
    int slast=func(n-2);
    return last+slast;
}
sdnfdslfdsfsdsdfds




int main()
{
    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;
    cout<<func(n);
    return 0;
}
#include<iostream>
#include<map>

using namespace std;

int main(){

map<int,int> mpp;
mpp.insert({2,3});
mpp.insert({3,4});
mpp[1]=2;
mpp[5]=4;
for(auto it: mpp){
cout<<it.first<<" "<<it.second<<endl;
}

cout<<mpp[1]<<endl;



}
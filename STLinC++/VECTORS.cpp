#include<iostream>
#include<vector>

using namespace std;


int main()
{
 vector<int> v;

v.push_back(1);
v.emplace_back(2);
for(auto it : v)
cout<<it<<endl;

v.push_back(3);
for(auto it : v)
cout<<it<<endl;


vector<pair<int,int>> v1;
v1.push_back({1,2});
v1.emplace_back(1,3);
for(auto it : v1)
cout<<"("<<it.first<<","<<it.second<<")"<<endl;


vector<int> v2 (5,100);

for(auto & it : v2)
cout<<it<<" ";
cout<<endl;

vector<int> v3 (5,20);

for(auto & it : v3)
cout<<it<<" ";
cout<<endl;

vector<int> v4(v3);

for(auto & it : v4)
cout<<it<<" ";
cout<<endl;

vector<int> v5;
v5 ={1,2,34,3,4,5};
for(auto & it : v5)
cout<<it<<" ";
cout<<endl;


vector<int> v6;
v6 ={1,2,3,4,5};

vector<int> :: iterator it = v6.begin();

for(; it!=v6.end();it++)
cout<<*(it)<<" ";

cout<<endl;


vector<int> v7;
v7 ={1,2,3,4,5};

vector<int> :: iterator it1 =v7.begin();
cout<<*it1<<" ";
it1++;
cout<<*it1<<" ";
it1++;
cout<<*it1<<" ";
it1++;
cout<<*it1<<" ";
it1++;
cout<<*it1<<" ";

cout<<endl;










    return 0;
}

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;


int longestSuccessiveElements(vector<int>&a){

    int n = a.size();
    if(n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    // put all the array elements into set:........
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }

    //Find the longest sequence:
    for(auto it : st){

        //if 'it' is a starting number:
        if(st.find(it - 1) == st.end()){

            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x+1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main(){
    
    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;
    vector<int> A(n);
    cout<<"Enter elements for array"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans = longestSuccessiveElements(A);
    cout<<"The longest consecutive sequence is "<<ans<<endl;

    return 0;
}
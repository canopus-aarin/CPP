#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>&a, int N){

    int hash[N + 1] = {0}; //hash array......


    // storing the frequencies:

    for(int i=0;i<N-1;i++)
    hash[a[i]]++;

    //checking the frequencies for number  1 to N:

    for(int i=1;i<=N;i++){
        if(hash[i]==0){
            return i;
        }
    }

    //The following line will never execute.....it is just to avoid warnings....

    return -1;
}




int main(){

    int N = 5;
    vector<int> a = {1,2,4,5};
    int ans = missingNumber(a,N);
    cout<<" The missing number is "<<ans<<endl;

    return 0;
}
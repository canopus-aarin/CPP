#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>&a, int N){


// Summation of first numbers.............
    int sum = (N*(N+1))/2;

    // summation of all array elements......

    int s2 = 0;
    for(int i=0;i<N-1;i++){
        s2+=a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}


int main(){

    int N = 5;
    vector<int> a = {1,2,4,5};
    int ans = missingNumber(a,N);
    cout<<"The Missing Number Is: "<<ans<<endl;

    return 0;
}
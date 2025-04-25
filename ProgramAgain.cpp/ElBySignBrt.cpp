#include<iostream>
#include<vector>

using namespace std;

vector<int> RearrangebySign(vector<int>A, int n){

    //Define 2 vectors, one for storing positive...
    // and other for negative elements of the array....

    vector<int> pos;
    vector<int> neg;

    // Segregate the array into positives and negatives....

    for(int i=0;i<n;i++){

        if(A[i] > 0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    //positives on even indices, negatives on odd....
    for(int i=0;i<n/2;i++){

        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
    }

    return A;
}

int main(){

    int n;
    cout<<"Enter some value for n "<<endl;
    cin>>n;

    vector<int> A(n);
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    vector<int> ans = RearrangebySign(A,n);

    for(int i = 0; i< ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}
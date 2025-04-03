#include<iostream>

using namespace std;

void Pattern1(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern2(int n){

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Pattern3(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void Pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void Pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
                for(int j=0;j<n-i-1;j++){
                    cout<<" ";
                }
                cout<<endl;
            }
}
void Pattern7(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern8(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern9(int n){

    int start=1;
    for(int i=0;i<n;i++){
        if(i%2 == 0) start =1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void Pattern10(int n){

    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space 
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        // numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space = space-2;
    }
}
void Pattern11(int n){

    int num =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}
void Pattern12(int n){

    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern13(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void Pattern14(int n){

    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern15(int n){

    for(int i=0;i<n;i++){
        // space......

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // characters.......
        char ch ='A'; int breakpoint = (2*i+1)/2;
        for(int j=0;j<=2*i;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
        // space.......

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pattern16(int n){

    for(int i=0;i<n;i++){

        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern17(int n){      // check this one..........

    int ini =0;
    for(int i=0;i<n;i++){
        // stars.......
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces........
        for(int j=0;j<ini;j++){
            cout<<" ";
        }
        // stars......
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        ini =ini+2;
        cout<<endl;
    }
    ini = ini-4;

    for(int i=0;i<=n-1;i++){
        // stars.....
        for(int j=0;j<i+2;j++){
            cout<<"*";
        }
        //spaces.......
        for(int j=0;j<ini;j++){
            cout<<" ";
        }
        // stars.......
        for(int j=0;j<i+2;j++){
            cout<<"*";
        }
        ini = ini-2;
        cout<<endl;
    }
}
void Pattern18(int n){

    int spaces =2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star =i;
        if(i>n) star= 2*n-i;
        // star.......
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //spaces..........

        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        // stars.........
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces = spaces-2;
        else spaces = spaces+2;
    }
}
void Pattern19(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";

            }
            else cout<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    int n;
    cout<<"Enter some value for n"<<endl;
    cin>>n;
    cout<<endl;
    Pattern19(n);
    
}
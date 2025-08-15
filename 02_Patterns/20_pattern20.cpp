/*
Day8 of DSA (14-08-2025)
pattern20 for n=3
----------
*    *
**  **
******
**  **
*    *
----------
*/
#include <bits/stdc++.h>
using namespace std;
void pattern20(int n){
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int spaces = 2*n-2*i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lowerpart
    for(int i=1;i<=n-1;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        int spaces = 2*i;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        
}
int main(){
    int num;
    cin>>num;
    pattern20(num);
}

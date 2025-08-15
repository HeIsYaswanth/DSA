/*
Day8 of DSA (14-08-2025)
Author: Yash
Pattern19 for n=4
----------
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/

#include <bits/stdc++.h>
using namespace std;
void pattern19(int n){
    //first half
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*i-2;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    //lower pattern
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int num;
    cin>>num;
    pattern19(num);
    return 0;
}
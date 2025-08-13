/*
Day7 of DSA (13-08-2025)
Author: yash
pattern12
----------
1      1
12    21
123  321
12344321
*/
#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //numbers 
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int j=1;j<(2*n)-(2*i);j++){
            cout<<" ";
        }
        //numbers decresing now
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern12(num);
}
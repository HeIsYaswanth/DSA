/*
Day9 of DSA (15-08-2025)
Pattern21 for n=4
-----------------
****
*  *
*  *
****
-------------------
*/

#include <bits/stdc++.h>
using namespace std;
void pattern21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j ==1 || i == n || j == n){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern21(num);
}
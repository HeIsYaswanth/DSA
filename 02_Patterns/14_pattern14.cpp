/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
A
AB
ABC
ABCD

*/

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=1;j<=i;j++){
            cout<<letter<<" ";
            letter++;
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern13(num);
}
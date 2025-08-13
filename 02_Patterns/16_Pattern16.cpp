/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
A
B B
C C C
D D D D
E E E E E

*/

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    char letter = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<letter<<" ";
        }
        cout<<endl;
        letter++;
    }
}
int main(){
    int num;
    cin>>num;
    pattern13(num);
}
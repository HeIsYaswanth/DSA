/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
A B C D E
A B C D
A B C
A B
A

*/

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=1;j<=n-i+1;j++){
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
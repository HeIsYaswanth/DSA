/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    for (int i=1;i<=n;i++){
        char letter = 'A';
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //letters
        for(int j=1;j<=2*i-1;j++){
            if(j<i){
                cout<<letter;
                letter++;
            }
            else{
                cout<<letter;
                letter--;
            }
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern13(num);
}
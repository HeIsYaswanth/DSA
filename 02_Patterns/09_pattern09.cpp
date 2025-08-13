/*
Day-7 of DSA (12-08-2025)
Pattern9
---------
for n=4
   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/

#include<bits/stdc++.h>
using namespace std;
void pattern9(int n){
    for(int i=1;i<=2*n-1;i++){ //row started
        int spaces = i<=n?n-i:(i-n);
        int stars = i<=n?(2*i)-1:2*(2*n-i)-1;

        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        cout<<endl;
        //row ended
    }
    
}
int main(){
    int num;
    cin>>num;
    pattern9(num);
}
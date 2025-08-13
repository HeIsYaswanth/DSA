/*
Day7 of DSA journey (13-08-2025)
Pattern10
Author: Yash
-----------
for input = 4
*
**
***
****
***
**
*
*/
#include <bits/stdc++.h>
using namespace std;
void pattern10(int n){
    for(int i=1;i<=(2*n)-1;i++){ //for n=5, we need 2*n-1 = 9 lines
        //top
        if(i<=n){ //for 5 lines(n=5), each line = that many stars
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        //bottom
        else{  
            //if line>5 (line is greater than given number0)
            //we can reduce line number stars from 2*n = 10-6 = 4 stars in line 6
            for(int j=1;j<=(2*n)-i;j++){
                cout<<"*";
            }
        }      
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern10(num);
}
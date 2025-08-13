/*
Day-6 of DSA (12-08-2025)
Pattern2
---------
 output:    * 
            * * 
            * * * 
            * * * *

*/

#include <bits/stdc++.h>
using namespace std;
void rightTrianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* "; //row number = no. of stars in that row
        }
        cout<<endl; //new line for new row.
    }
}
int main(){
    int n;
    cin>>n;  //if 5 is input, last line will have 5 stars
    rightTrianglePattern(n);
    return 0;
}
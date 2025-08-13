/*
Day-6 of DSA (12-08-2025)
Pattern3
---------
 output:    1
            1 2
            1 2 3
            1 2 3 4

*/

#include <bits/stdc++.h>
using namespace std;
void rightTriangleNumberPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" "; //row number = numbers up to that row number.
        }
        cout<<endl; //new line for new row.
    }
}
int main(){
    int n;
    cin>>n;  //if 5 is input, last line will have numbers up to 5.
    rightTriangleNumberPattern(n);
    return 0;
}
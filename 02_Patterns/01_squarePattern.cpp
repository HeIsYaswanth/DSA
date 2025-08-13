/*
Day-6 of DSA (12-08-2025)
Pattern1
---------
 output:    * * * *
            * * * *
            * * * *
            * * * *

*/

#include <bits/stdc++.h>
using namespace std;
void squarePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* "; //inner loop for columns
        }
        cout<<endl; //after completing the column, line will be ended.
    }
}
int main(){
    int n;
    cin>>n;  //if 5 is input, square of 5 star rows and columns printed
    squarePattern(n);
    return 0;
}
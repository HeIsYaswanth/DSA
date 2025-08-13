/*
Day-6 of DSA (12-08-2025)
Pattern4
---------
 output:    1 
            2 2 
            3 3 3
            4 4 4 4

*/

#include <bits/stdc++.h>
using namespace std;
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ //inner loop iterates based on outper loop condition
            cout<<i<<" ";
        } 
        cout<<endl; //row ended;
    }
}
int main(){
    int num;
    cin>> num;
    pattern4(num); //num=5 means 5 rows will be printed, and on each row
                   //on row1, only 1's and on row2 only 2's etc printed. 
    return 0;
}
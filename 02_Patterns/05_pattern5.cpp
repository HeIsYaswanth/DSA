/*
Day-6 of DSA (12-08-2025)
Pattern5
--------
* * * *
* * *
* * 
*

*/

#include <bits/stdc++.h>
using namespace std;
void pattern5(int n){
    for(int i=1;i<=n;i++){ //row started
        for(int j=i;j<=n;j++){ 
            //for row1 = 5 stars(i=1 to num=5)
            //for row2 = 4 stars (i=2 to num=5)
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern5(num); //num=5, 5 rows printed.
}